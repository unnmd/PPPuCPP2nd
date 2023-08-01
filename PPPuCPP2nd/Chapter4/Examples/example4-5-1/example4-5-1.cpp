//
//  main.cpp
//  example4-5-1
//
//  Created by Vitaly Ovchinnikov on 01.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

void print_square(int v)
  {
      cout << v << '\t' << v*v << '\n';
  }

int main()
  {
    for (int i { 0 }; i<100; ++i) print_square(i);

    //keep_window_open();
    return 0;

  }
 
