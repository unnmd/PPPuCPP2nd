//
//  main.cpp
//  exercise5-6
//
//  Created by Vitaly Ovchinnikov on 18.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

double ctof(double c) {
    constexpr double absolutNull = -273.15;
    if(c<absolutNull){
        cerr << "Ошибка: температура не может меньше абсолтного нуля\n";
        return numeric_limits<double>::quiet_NaN();
    }else{
        double f=(c*9/5)+32;
        return f;
    }
    
}

double ftoc(double f) {
    constexpr double absolutNull = -459.67;
    if(f<absolutNull){
        cerr << "Ошибка: температура не может меньше абсолтного нуля\n";
        return numeric_limits<double>::quiet_NaN();
    }else{
        double c=(f-32)*5/9;
        return c;
    }
    
}
int main() {
    try{
        double f    = 0;
        double c    = 0;
        double temp = 0;
        char unit {' '};
        
        cout << "Введите температуру в цельсиях или фарингейт, которую нужно преобразорвать (пример 100 с или 100 f) \n";
        
        while(cin >> temp >> unit){
            if(unit!='f' and unit!='c'){
                cout << "Не верный ввод. Ожидается символ 'f' или 'c'\n";
                continue;
            }
            switch (unit) {
                case 'f':
                    f=ftoc(temp);
                    if(!isnan(f)){
                        cout << f <<'\n';
                    }
                    break;
                case 'c':
                    c=ctof(temp);
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
