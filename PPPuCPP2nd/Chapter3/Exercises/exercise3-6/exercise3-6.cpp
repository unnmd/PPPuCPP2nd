//
//  main.cpp
//  exercise3-6
//
//  Created by Vitaly Ovchinnikov on 24.07.2023.
//

#include "../../../lib/std_lib_facilities.h"

int main()
  {
    int val1 { 0 }, val2 { 0 }, val3 { 0 };
    cout << "Введите три целых числа:\n";
    cin >> val1 >> val2 >> val3;
    int min { 0 }, mid { 0 }, max { 0 };

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
