//
//  main.cpp
//  exercise4-6
//
//  Created by Vitaly Ovchinnikov on 01.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

int main(){
    vector<string> strDigits {"zero", "one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine"};
    vector<string> intDigits {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    bool found { false };
    string arg { " " };
    
    cout << "Введите цифру или цифру прописью:\n";
    while(cin >> arg){
        for( int i { 0 }; i <  strDigits.size(); ++i ){
            if(arg==strDigits[i]){
                cout << "Вы ввели: " << intDigits[i] << '\n';
                found = true;
                break;
            }
            else if(arg==intDigits[i]){
                cout << "Вы ввели: " << strDigits[i] << '\n';
                found = true;
                break;
            }
        }
        if(!found) cout << "Вы ввели не верные данные\n";
    }
}


