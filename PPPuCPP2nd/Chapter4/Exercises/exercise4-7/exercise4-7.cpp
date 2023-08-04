//
//  main.cpp
//  exercise4-7
//
//  Created by Vitaly Ovchinnikov on 01.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

int main(){
    vector<string> strDigits {"zero", "one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine"};
    vector<string> intDigits {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    bool isFirst { false }, isSecond {false};
    string arg { " " };
    string strVal1 { " " }, strVal2 { " " };
    int intVal1 { 0 }, intVal2 { 0 };
    char oper { ' ' };
    
    cout << "Введите два числа от 0 до 9 цифрами или прописью и символ операции\n";
    while(cin >> strVal1 >> strVal2 >> oper){
        for( int i { 0 }; i <  strDigits.size(); ++i ){
            if(strVal1==intDigits[i]){
                arg=strVal1;
                isFirst=true;
            }
            else if (strVal1==strDigits[i]){
                arg=strVal1;
                isFirst=true;
            }
            else if (strVal2==intDigits[i]){
                arg=strVal2;
                isSecond=true;
            }
            else if(strVal2==strDigits[i]){
                arg=strVal2;
                isSecond=true;
            }
            if(arg==strDigits[i]){
                cout << "Вы ввели: " << intDigits[i] << '\n';
//                found = true;
                if(isFirst){
                    intVal1 = i;
                    isFirst = false;
                }
                else if(isSecond){
                    intVal2 = i;
                    isSecond = false;
                }
                //break;
                
            }
            else if(arg==intDigits[i]){
                cout << "Вы ввели: " << strDigits[i] << '\n';
//                found = true;
                if(isFirst){
                    intVal1 = i;
                    isFirst = false;
                }
                else if(isSecond){
                    intVal2 = i;
                    isSecond = false;
                }
                //break;
            }
        }
        
        switch (oper) {
            case '+':
                cout << "Сумма " << strVal1 << " и " << strVal2 << " равна " << intVal1 + intVal2 << '\n';
                break;
            case '-':
                cout << "Вычитание " << strVal1 << " и " << strVal2 << " равно " << intVal1 - intVal2 << '\n';
                break;
            case '*':
                cout << "Умножение " << strVal1 << " и " << strVal2 << " равно " << intVal1 * intVal2 << '\n';
                break;
            case '/':
                cout << "Деление " << strVal1 << " и " << strVal2 << " равна " << intVal1 / intVal2 << '\n';
                break;
            default:
                cout << "Вы ввели не верный символ операции\n";
                break;
        }
    }
}
