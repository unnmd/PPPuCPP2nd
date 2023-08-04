//
//  main.cpp
//  exercise4-5
//
//  Created by Vitaly Ovchinnikov on 01.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

int main(){
    double val1 { 0 }, val2 { 0 };
    char oper { ' ' };
    
    cout << "Введите два числа и символ операции\n";
    while(cin >> val1 >> val2 >> oper){
        switch (oper) {
            case '+':
                cout << "Сумма " << val1 << " и " << val2 << " равна " << val1 + val2 << '\n';
                break;
            case '-':
                cout << "Вычитание " << val1 << " и " << val2 << " равно " << val1 - val2 << '\n';
                break;
            case '*':
                cout << "Умножение " << val1 << " и " << val2 << " равно " << val1 * val2 << '\n';
                break;
            case '/':
                cout << "Деление " << val1 << " и " << val2 << " равна " << val1 / val2 << '\n';
                break;
            default:
                cout << "Вы ввели не верный символ операции\n";
                break;
        }
    }
}
