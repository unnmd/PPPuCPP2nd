//
//  main.cpp
//  exercise5-5
//
//  Created by Vitaly Ovchinnikov on 18.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

double ctok(double c) {
    constexpr double absolutNull = -273.15;
    if(c<absolutNull){
        cerr << "Ошибка: температура не может меньше абсолтного нуля\n";
        return numeric_limits<double>::quiet_NaN();
    }else{
        double k = c + 273.15;
        return k;
    }
    
}

double ktoc(double k) {
    constexpr double absolutNull = 0;
    if(k<absolutNull){
        cerr << "Ошибка: температура не может меньше абсолтного нуля\n";
        return numeric_limits<double>::quiet_NaN();
    }else{
        double c = k - 273.15;
        return c;
    }
    
}
int main() {
    try{
        double k    = 0;
        double c    = 0;
        double temp = 0;
        char unit {' '};
        
        cout << "Введите температуру в цельсиях или кельвинах, которую нужно преобразорвать (пример 100 с или 100 k) \n";
        
        while(cin >> temp >> unit){
            if(unit!='k' and unit!='c'){
                cout << "Не верный ввод. Ожидается символ 'k' или 'c'\n";
                continue;
            }
            switch (unit) {
                case 'k':
                    k=ktoc(temp);
                    if(!isnan(k)){
                        cout << k <<'\n';
                    }
                    break;
                case 'c':
                    c=ctok(temp);
                    if(!isnan(c)){
                        cout << c << '\n';
                    }
                    break;
                    
                default:
                    break;
            }
        }
    }
    catch (exception& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }
    catch (...) {
        cerr << "Unknown exception!\n";
        return 2;
    }
}
