//
//  main.cpp
//  exercise3-7
//
//  Created by Vitaly Ovchinnikov on 24.07.2023.
//

#include "../../../lib/std_lib_facilities.h"

int main()
  {
    string val1 { " " }, val2 { " " }, val3 { " " };
    cout << "Введите три слова:\n";
    cin >> val1 >> val2 >> val3;
    string  min { " " }, mid { " " }, max { " " };

    if (val1 > val2){
        if (val1 > val3){
          max = val1;
          if(val2 > val3){
            mid = val2;
            min = val3;
          }
          else{
            mid = val3;
            min = val2;
          }
        }
        else {
          min = val2;
          mid = val1;
          max = val3;
        }
    }
    else {
      if (val1 > val3){
        min = val3;
        mid = val1;
        max = val2;
      }
      else{
      min = val1;
       if (val2 > val3){
          mid = val3;
          max = val2;
        }
       else{
         mid = val2;
         max = val3;
       }
      }
    }
    cout << min << ", " << mid << ", " << max << '\n';
    //keep_window_open();
    return 0;
  }
