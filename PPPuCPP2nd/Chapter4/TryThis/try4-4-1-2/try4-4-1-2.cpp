//
//  main.cpp
//  try4-4-1-2
//
//  Created by Vitaly Ovchinnikov on 01.08.2023.
//

#include "../../../lib/std_lib_facilities.h"


int main()
  {
    constexpr double rub_to_usd { 82.35 };
    constexpr double eur_to_usd { 1.069 };
    constexpr double jpy_to_usd { 139.75 };
    double currency { 1 };
    char unit { 0 };
    cout << "Пожалуйста, введите количество"
      << " и денежную единицу  (d, r, e и j):\n";
    cin >> currency >> unit;
    switch (unit){
      case 'd':
      cout << currency << " usd == "
        << rub_to_usd*currency << " rub\n"
        << currency << " usd == "
        << eur_to_usd*currency << " eur\n"
        << currency << " usd == "
        << jpy_to_usd*currency << " jpy\n";
      break;
    case 'r':
      cout << currency << " rub == "
        << currency/rub_to_usd << " usd\n"
        << currency << " rub == "
        << currency/(eur_to_usd*rub_to_usd) << " eur\n"
        << currency << " rub == "
        << (currency/rub_to_usd)*jpy_to_usd << " jpy\n";
      break;
    case 'e':
      cout << currency << " eur == "
        << currency/eur_to_usd << " usd\n"
        << currency << " eur == "
        << eur_to_usd*rub_to_usd << " rub\n"
        << currency << " eur == "
        << eur_to_usd*jpy_to_usd << " jpy\n";
      break;
    case 'j':
      cout << currency << " jpy == "
        << currency/jpy_to_usd << " usd\n"
        << currency << " jpy == "
        << currency/jpy_to_usd*rub_to_usd << " rub\n"
        << currency << " jpy == "
        << currency/jpy_to_usd*eur_to_usd << " eur\n";
      break;
    default:
     cout << "Извинте, я не знаю, что такое "
       << unit << '\n';
     break;
    }
      
    
    //keep_window_open();
    return 0;

  }
