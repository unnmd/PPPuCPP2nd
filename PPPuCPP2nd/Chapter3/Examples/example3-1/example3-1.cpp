//
//  main.cpp
//  example3-1
//
//  Created by Vitaly Ovchinnikov on 24.07.2023.
//

#include "../../../lib/std_lib_facilities.h"

int main()
  {
    cout << "Введите ваше имя (и нажмите 'enter'):\n";
    string first_name;
    cin >> first_name;
    cout << "Привет, " << first_name << "!\n";
    //keep_window_open();
    return 0;

  }
