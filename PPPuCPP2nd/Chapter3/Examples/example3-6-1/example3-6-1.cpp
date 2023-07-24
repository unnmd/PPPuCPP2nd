//
//  main.cpp
//  example3-6-1
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
    int number_of_words = 0;
    string previous = " ";
    
    string current;
    while (cin>>current) {
      ++number_of_words;
      if (previous == current)
        cout << "Повторяющееся слово: " << current
          << " после " << number_of_words
          << '\n';
      previous = current;
     
    }
    //keep_window_open();
    return 0;

  }



