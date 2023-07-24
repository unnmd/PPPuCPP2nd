//
//  main.cpp
//  exercise3-9
//
//  Created by Vitaly Ovchinnikov on 24.07.2023.
//

#include "../../../lib/std_lib_facilities.h"

int main()
  {
    string word { " " };
    cout << "Введите цыфру - буквами(ноль, один...): \n";
    cin >> word;

    if (word=="ноль")
      cout << "Вы ввели цифру - 0\n";
    else if (word=="один")
      cout << "Вы ввели цифру - 1\n";
    else  if (word=="два")
      cout << "Вы ввели цифру - 2\n";
    else if (word=="три")
      cout << "Вы ввели цифру - 3\n";
    else if (word=="четыри")
      cout << "Вы ввели цифру - 4\n";
    else
      cout << "Я не знаю такого числа\n";
    //keep_window_open();
    return 0;
  }
