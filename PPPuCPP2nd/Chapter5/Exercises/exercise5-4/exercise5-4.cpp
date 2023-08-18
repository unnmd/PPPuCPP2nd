//
//  main.cpp
//  exercise5-4
//
//  Created by Vitaly Ovchinnikov on 18.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

double ctok(double c) {
    constexpr double absolutNull = -273.15;
    if(c<absolutNull){
        cerr << "Ошибка: температура не может меньше абсолтного нуля\n";
        return -1;
    }else{
        double k = c + 273.15;
        return k;
    }
    
}
int main() {
    double c = 0;
    while(cin >> c){
        double k = ctok(c);
        if(k!=-1){
            cout << k << '\n';
        }
    }
    return 0;
}
