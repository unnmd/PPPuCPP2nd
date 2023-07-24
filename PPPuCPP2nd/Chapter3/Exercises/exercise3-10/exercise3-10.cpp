//
//  main.cpp
//  exercise3-10
//
//  Created by Vitaly Ovchinnikov on 24.07.2023.
//

#include "../../../lib/std_lib_facilities.h"

int main()
  {
    string oper { " " };
    double val1 { 0 }, val2 { 0 };

    cout << "Введите математический оператор и два целых числа:\n";
    cin >> oper >> val1 >> val2;
    if (oper == "+" || oper == "plus")
      cout << val1 + val2 << '\n';
    else if (oper == "-" || oper == "minus")
      cout << val1 - val2 << '\n';
    else if (oper == "*" || oper == "mul")
      cout << val1 * val2 << '\n';
    else if (oper == "/" || oper == "div")
      cout << val1 / val2 << '\n';
    else
      cout << "Вы ввели не верное значение\n";

    //keep_window_open();
    return 0;
  }

