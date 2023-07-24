//
//  main.cpp
//  exercise3-2
//
//  Created by Vitaly Ovchinnikov on 24.07.2023.
//

#include "../../../lib/std_lib_facilities.h"


int main()
  {
    cout << "Введите число миль, которые вы хотите преобразовать в километры:\n";
    double miles { 0.0 };
    cin >> miles;
    cout << miles << " миль равна " << miles*1.609 << " километров\n";
    //keep_window_open();
    return 0;

  }

