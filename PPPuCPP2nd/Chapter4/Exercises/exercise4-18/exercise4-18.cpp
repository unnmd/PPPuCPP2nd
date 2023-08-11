//
//  main.cpp
//  exercise4-18
//
//  Created by Vitaly Ovchinnikov on 10.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

int main()
  {
    double a { 0 }, b { 0 }, c { 0 }, D { 0 }, x1 { 0 }, x2 { 0 };
    
    while(cin >> a >> b >> c){
        if(a==0){
            cout << "Переменная не может содержать 0 !\n";
        }
        else{
            D = b*b - 4 * a * c;
            if(D>0){
                cout << "Eсть два различных корня\n";
                x1 = ( -b + sqrt(D) )/ ( 2 * a );
                cout << "Первый корень x1" << " равен " << x1 << '\n';
                x2 = ( -b - sqrt(D) )/ (2 * a );
                cout << "Второй корень x2" << " равен " << x2 << '\n';
            }
            else if(D<0){
                cout << "Корней нет\n";
            }
            else if(D==0){
                cout << "есть один корень\n";
                x1 = -b / ( 2 * a );
                cout << "x1" << " равен " << x1 << '\n';
            }
        }
    }
    return 0;
}
