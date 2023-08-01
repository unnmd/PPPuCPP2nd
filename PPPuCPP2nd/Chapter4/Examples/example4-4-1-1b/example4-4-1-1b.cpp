//
//  main.cpp
//  example4-4-1-1b
//
//  Created by Vitaly Ovchinnikov on 01.08.2023.
//

#include "../../../lib/std_lib_facilities.h"


int main()
  {
    constexpr double cm_per_inch { 2.54 };
    double lenght { 1 };
    char unit { 0 };
    cout << "Пожалуйста, введите длину"
      << " и единицу измерения (c и i):\n";
    cin >> lenght >> unit;
    if (unit == 'i')
      cout << lenght << "in == "
        << cm_per_inch*lenght << "cm\n";
    else if (unit == 'c')
      cout << lenght << "cm == "
        << lenght/cm_per_inch << "in\n";
    else
     cout << "Извинте, я не знаю, что такое "
       << unit << '\n';

      
    
    //keep_window_open();
    return 0;

  }
