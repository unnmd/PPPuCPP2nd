//
//  main.cpp
//  example3-5
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
    string previous = " ";
    
    string current;
    while (cin>>current) {
      if (previous == current)
        
        cout << "Повторяющееся слово: " << current << '\n';
      previous = current;
     
    }
    //keep_window_open();
    return 0;

  }



