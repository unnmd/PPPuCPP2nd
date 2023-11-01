//
//  main.cpp
//  exercise6-3
//
//  Created by Vitaly Ovchinnikov on 31.08.2023.
//

#include "../../../lib/std_lib_facilities.h"


//------------------------------------------------------------------------------
class Token{
public:
    char kind;        // what kind of token
    double value;     // for numbers: a value
    Token(char ch)    // make a Token from a char
        :kind(ch), value(0) { }
    Token(char ch, double val)     // make a Token from a char and a double
        :kind(ch), value(val) { }
};

//------------------------------------------------------------------------------

class Token_stream {
public:
    Token_stream();   // make a Token_stream that reads from cin
    Token get();      // get a Token (get() is defined elsewhere)
    void putback(Token t);    // put a Token back
private:
    bool full;        // is there a Token in the buffer?
    Token buffer;     // here is where we keep a Token put back using putback()
};

//------------------------------------------------------------------------------

// The constructor just sets full to indicate that the buffer is empty:
Token_stream::Token_stream()
    :full(false), buffer(0)    // no Token in buffer
{
}

//------------------------------------------------------------------------------

// The putback() member function puts its argument back into the Token_stream's buffer:
void Token_stream::putback(Token t)
{
    if (full) error("putback() into a full buffer");
    buffer = t;       // copy t to buffer
    full = true;      // buffer is now full
}

//------------------------------------------------------------------------------
//fix 2
//Token get()
Token Token_stream::get()
{
    if (full) {       // do we already have a Token ready?
        // remove token from buffer
        full = false;
        return buffer;
    }

    char ch;
    cin >> ch;    // note that >> skips whitespace (space, newline, tab, etc.)

    switch (ch) {
    case '=':    // for "print"
    case 'x':    // for "quit"
    case '!':
    case '(': case ')':
    case '{': case '}':
    case '+': case '-': case '*': case '/':
    return Token(ch);        // let each character represent itself
    case '.':
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
    {
        cin.putback(ch);         // put digit back into the input stream
        double val;
        cin >> val;              // read a floating-point number
        return Token('8', val);   // let '8' represent "a number"
    }
    default:
        error("Bad token");
        return Token('8', 0.0);
    }
}

//------------------------------------------------------------------------------

Token_stream ts;        // provides get() and putback()

//------------------------------------------------------------------------------

double expression();    // declaration so that primary() can call expression()

//------------------------------------------------------------------------------


double factorial(int n)
// Calculates the factorial of n (n!)
// Non-recursive implementation.
// Pre-condition:
//  n must be positive
{
    if (n < 0) error("factorial(), invoked with a negative number");
    //if (n > 31) error("factorial(), invoked with a negative number");

    double f = 1;
    if (n != 0){
        while (n > 0) {
            f *= n;
            --n;
        }
    }
    return f;
}


// deal with numbers and parentheses
double primary()
{
    Token t = ts.get();
    switch (t.kind) {
    case '(':    // handle '(' expression ')'
    {
        double d = expression();
        t = ts.get();
        if (t.kind != ')') error("')' expected");
            return d;
    }
    case '{':    // handle '(' expression ')'
    {
        double d = expression();
        t = ts.get();
        if (t.kind != '}') error("'}' expected");
            return d;
    }
    case '8':            // we use '8' to represent a number
        return t.value;  // return the number's value
    default:
        error("primary expected");
            return 0.0;
    }
}

//------------------------------------------------------------------------------


//deal with !
double hiop()
{
    double left = primary();
    Token t = ts.get();

    // We don't need a while loop like in term() because
    // ! is an unary operation
    switch (t.kind) {
        case '!':   // handle factorial operation
            return factorial(left);
            // This could be written:
            // {
            //      int n = left;
            //      double d = factorial(n);
            //      return d;
            // }
            // , but a brief comparison at Compiler Explorer (https://godbolt.org)
            // shows that the former has similar but smaller assembly code in
            // gcc 6.3
        default:    // otherwise, return the primary putting back t into ts
            ts.putback(t);
            return left;
    }
}

// deal with *, /, and %
double term()
{
    double left = hiop();
    Token t = ts.get();        // get the next token from token stream

    while (true) {
        switch (t.kind) {
        case '*':
            left *= hiop();
            t = ts.get();
            break;
        case '/':
        {
            double d = hiop();
            if (d == 0) error("divide by zero");
            left /= d;
            t = ts.get();
            break;
        }
        default:
            ts.putback(t);     // put t back into the token stream
            return left;
        }
    }
}

//------------------------------------------------------------------------------

// deal with + and -
double expression()
{
    double left = term();      // read and evaluate a Term
    Token t = ts.get();        // get the next token from token stream

    while (true) {
        switch (t.kind) {
        case '+':
            left += term();    // evaluate Term and add
            t = ts.get();
            break;
        case '-':
            left -= term();    // evaluate Term and subtract
            t = ts.get();
            break;
        default:
            ts.putback(t);     // put t back into the token stream
            return left;       // finally: no more + or -: return the answer
        }
    }
}

//------------------------------------------------------------------------------

int main()
try
{
    double val = 0;
    while (cin) {
        Token t = ts.get();
        
        
        if (t.kind == 'x') break; // 'q' for quit
        if (t.kind == '=')        // ';' for "print now"
            cout << "=" << val << '\n';
        else
            ts.putback(t);
        val = expression();
    }
    keep_window_open();
}
catch (exception& e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}
catch (...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}

//------------------------------------------------------------------------------
