//
//  main.cpp
//  exercise3-5
//
//  Created by Vitaly Ovchinnikov on 24.07.2023.
//

#include "../../../lib/std_lib_facilities.h"


int main()
  {
    double val1, val2;
    cout << "Введите значение номер 1:\n";
    cin >> val1;

    cout << "Введите значение номер 2:\n";
    cin >> val2;

    if (val1 > val2)
        cout << "Значение 1 больше значения 2\n";
    else
        cout << "Значение 2 больше значения 1\n";

    cout << val1 << "+" <<  val2 << "=" << val1 + val2 << '\n';
    cout << val1 << "/" <<  val2 << "=" << val1 / val2 << '\n';
    cout << val1 << "*" <<  val2 << "=" << val1 * val2 << '\n';
    cout << val1 << "-" <<  val2 << "=" << val1 - val2 << '\n';
    //keep_window_open();
    return 0;

  }
