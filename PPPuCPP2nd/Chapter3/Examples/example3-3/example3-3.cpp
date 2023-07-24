//
//  main.cpp
//  example3-3
//
//  Created by Vitaly Ovchinnikov on 24.07.2023.
//

#include "../../../lib/std_lib_facilities.h"

int main()
  {
    cout << "Пожайлуйста, введите свое имя и возраст:\n";
    string first_name;
    double age;
    cin >> first_name;
    cin >> age;
    cout << "Привет, " << first_name << " (age " << age*12 << ")\n";
    keep_window_open();
    return 0;

  }



