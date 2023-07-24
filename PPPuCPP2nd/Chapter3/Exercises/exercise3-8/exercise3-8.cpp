//
//  main.cpp
//  exercise3-8
//
//  Created by Vitaly Ovchinnikov on 24.07.2023.
//

#include "../../../lib/std_lib_facilities.h"

int main()
  {
    cout << "Введите целое число: " << '\n';
    int number { 0 };
    cin >> number;
    if (number%2==0){
      cout << "Число " << number << " является четным \n";
    }
    else {
      cout << "Число " << number << " не является четным \n";
    }
    //keep_window_open();
    return 0;
  }
