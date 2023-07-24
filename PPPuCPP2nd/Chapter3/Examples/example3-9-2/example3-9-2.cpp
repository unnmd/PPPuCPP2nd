//
//  main.cpp
//  example3-9-2
//
//  Created by Vitaly Ovchinnikov on 24.07.2023.
//

#include "../../../lib/std_lib_facilities.h"

//inline void keep_window_open()
  //{
    //char ch;
    //cin>>ch;
  //}

int main()
  {
    //int a = 20000;
    //char c = a;
    //int b = c;
    //if (a != b)
      //cout << "Ой!: " << a << "!=" << b << '\n';
    //else
      //cout << "Ого! однако у вас большой chat\n";

    double d = 0;
    while (cin >> d) {
      int i = d;
      char c = i;
      int i2 = c;
      cout << " d==" << d
           << " i==" << i
           << " i2==" << i2
           << " char(" << c << ")\n";
    }
    //keep_window_open();
    return 0;

  }


