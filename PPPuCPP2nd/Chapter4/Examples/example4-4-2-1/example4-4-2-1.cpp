//
//  main.cpp
//  example4-4-2-1
//
//  Created by Vitaly Ovchinnikov on 01.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

int square(int x)
  {
    return x*x;
  }

int main()
  {
    int i { 0 };
    while (i<100) {
      cout << i << '\t' << square(i) << '\n';
      ++i;
    }


    //keep_window_open();
    return 0;

  }
 
