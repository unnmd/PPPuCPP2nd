//
//  main.cpp
//  ch4-drill-1-5
//
//  Created by Vitaly Ovchinnikov on 01.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

int main()
  {
    double val1 { 0 }, val2 { 0 };
    constexpr double div { 1.0/100 };
    cout << "Введите два числа: ";
    while (cin >> val1 >> val2)
    {
      //cout << val1 << " " << val2 << '\n';
      if (val1 > val2){
        cout << "Наибольшее значение равно: " << val1 << '\n'
          << "Наименьшее значение равно: " << val2 << '\n';
      }
      else if (val1 < val2){
        cout << "Наибольшее значение равно: " << val2 << '\n'
          << "Наименьшее значение равно: " << val1 << '\n';
      }
      else{
       cout << "Числа равны\n";
      }
      if ((val1-val2)<div)
        cout << "Числа почти равны\n";
    }
    //keep_window_open();
    return 0;

  }

