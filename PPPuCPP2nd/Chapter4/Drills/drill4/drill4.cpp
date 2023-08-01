//
//  main.cpp
//  drill4
//
//  Created by Vitaly Ovchinnikov on 01.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

int main()
  {
    constexpr double cm = 0.01;
    constexpr double m = 1;
    constexpr double in = 2.54;
    constexpr double ft = 12;
    double num { 0 };
    double num_conv { 0 };
    double smallest { 0 };
    double biggest { 0  };
    double sum { 0 };
    string unit { " " };
    bool is_valid = true;
    bool is_first = true;
    vector<double> vals;
    cout << "Введите длини и еденицу измерения (m, in, ft или cm): ";

    while (cin >> num >> unit)
    {
      if(unit=="cm"){
        num_conv = num*cm;
        sum += num_conv;
      }
      else if(unit=="m"){
        num_conv = num*m;
        sum += num_conv;
      }
      else if(unit=="in"){
        num_conv = num*cm*in;
        sum += num_conv;
      }
      else if(unit=="ft"){
        num_conv = (num*(cm*in))*ft;
        sum += num_conv;
      }
      else {
        is_valid = false;

      }
  
      if(is_valid){
        if(num_conv < smallest || is_first)
            {
            smallest = num_conv;
            cout << " (Наименьшее среди введены)\n";
            }
        if (num_conv > biggest || is_first)
            {
            biggest = num_conv;
            cout << " (Наибольшее среди введеных)\n";
            }
        is_first = false;
        vals.push_back(num_conv);
        }
      else {
        cout << "Вы ввели не верную еденицу измерения" << '\n';
        is_valid = true;
      }
    }
    cout << sum << " сумма введеных чисел\n";
    sort(vals.begin(), vals.end());
    for (int i = 0; i<vals.size(); ++i)
       cout << vals[i] << " m\n";
      //cout << " Число равно: " << num << "\n";
      //keep_window_open();
    return 0;

  }
