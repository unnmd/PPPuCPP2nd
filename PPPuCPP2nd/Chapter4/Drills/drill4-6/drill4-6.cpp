//
//  main.cpp
//  drill4-6
//
//  Created by Vitaly Ovchinnikov on 01.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

int main()
  {
    double val { 0 };
    double smallest { 0 };
    double biggest { 0 };


    cout << "Введите число: ";
    while (cin >> val)
    {
      cout << val;
      if (val < smallest){
        //smallest = val;
        biggest = val;
        cout << " Наименьшее значение\n";
      }
      if (val>biggest){
        //biggest = val;
        smallest = val;
        cout << " Наибольшее значение\n";
      }
    }
    //keep_window_open();
    return 0;

  }
