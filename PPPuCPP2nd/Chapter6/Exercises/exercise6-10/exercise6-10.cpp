//
//  main.cpp
//  exercise6-10
//
//  Created by Vitaly Ovchinnikov on 02.11.2023.
//

#include "../../../lib/std_lib_facilities.h"

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

int permutations(int a, int b){
    return factorial(a)/factorial(a-b);
}

int combinations(int a, int b){
    return permutations(a,b)/factorial(b);
}


int main()
try {
    int a, b;
    char ch;
    int result;
    cout << "Введите 2 числа:" << '\n';
    while(cin) {
        cin >> a >> b;
        if(a<0){
            cout << "Число не должно быть отрицательным" << '\n';
            return 1;
        }
        if(b<0 || a < b){
            cout << "Число не должно быть отрицательным и первое число должно быть больше второго" << '\n';
            return 1;
        }
        if (!cin) {
            cout << "Numbers, please!\n";
            cin.clear();
            cin.ignore(10000,'\n');
        }
        else {
            cout << "Что необходимо вычислить? Введите (P)Пересотановски или (С)сочитания:" << '\n';
            cin >> ch;
            if(ch=='P') {
                result=permutations(a, b);
                cout << result;
            }
            else if(ch=='C') {
                result=combinations(a, b);
                cout << result;
            }
            else{
                cout << "Ошибка: Неверный выбор операции." << '\n';
            }
        }
    }
    return 0;
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

