//
//  main.cpp
//  example4-4-1-1a.cpp
//
//  Created by Vitaly Ovchinnikov on 01.08.2023.
//

#include "../../../lib/std_lib_facilities.h"


int main()
  {
    int a { 0 }, b { 0 };
    cout << "Пожалуйста, введите два целых числа\n";
    cin >> a >> b;

    if (a<b)
      cout << "max(" << a << ',' << b
        << ") равно " << b << '\n';
    else
      cout << "max(" << a << ',' << b
        << ") равно " << a << '\n';
      
    
    //keep_window_open();
    return 0;

  }
