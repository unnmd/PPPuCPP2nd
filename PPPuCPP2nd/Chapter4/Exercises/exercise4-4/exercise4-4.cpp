//
//  main.cpp
//  exercise4
//
//  Created by Vitaly Ovchinnikov on 21.07.2023.
//

#include "../../../lib/std_lib_facilities.h"

int main()
  {
    int lower_limit { 1 }, upper_limit { 100 }, guess { 50 };
    char response { ' ' };
    cout << "Задумайте число от 1 до 100\n";

    for(int i = 0; i < 6; ++i){
      guess=(upper_limit+lower_limit)/2;
      cout << "Ваше число меньше " <<  guess << " ?\n";
      cin >> response;
      if(response=='y'){
       upper_limit = guess - 1;
        guess = upper_limit;
      }
      else if (response=='n') {
        lower_limit = guess + 1;
        guess = lower_limit;
      }
      else {
        cout << "Вы ввели не верную букву! \n";
        break;
      }
    }
    cout << "Вы загадали число: " << guess << '\n';
    //keep_window_open();
    return 0;

  }
