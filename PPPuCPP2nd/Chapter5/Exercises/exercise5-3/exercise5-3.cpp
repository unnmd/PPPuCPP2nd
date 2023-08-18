//
//  main.cpp
//  exercise5-3
//
//  Created by Vitaly Ovchinnikov on 18.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

double ctok(double c) {
    double k = c + 273.15;
    return k;
}
int main() {
    double c = 0;
    while(cin >> c){
        double k = ctok(c);
        if(k<0){
            cout << "Ошибка: температура не может меньше 0\n";
        }
        else{
            cout << k << '\n';
        }
    }
}
