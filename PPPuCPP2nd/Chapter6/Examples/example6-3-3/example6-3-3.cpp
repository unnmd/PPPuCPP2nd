//
//  main.cpp
//  example6-3-3
//
//  Created by Vitaly Ovchinnikov on 31.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

class Token {
public:
    char kind;
    double value;
};


int main(int argc, const char * argv[]) {
    Token t;
    t.kind = '+';
    Token t2;
    t2.kind = '8';
    t2.value = 3.14;
    
    Token tt=t;
    if(tt.kind !=t.kind ) error("невозможно!");
    t = t2;
    cout << t.value << '\n'; 
    
    
    
    return 0;
}
