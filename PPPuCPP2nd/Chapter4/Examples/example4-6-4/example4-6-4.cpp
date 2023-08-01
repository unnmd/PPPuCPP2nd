//
//  main.cpp
//  example4-6-4
//
//  Created by Vitaly Ovchinnikov on 01.08.2023.
//

#include "../../../lib/std_lib_facilities.h"


int main()
  {
    vector<string> words;
    for ( string temp; cin >> temp; )
      words.push_back(temp);
    cout << "Количество слов: " << words.size() <<  '\n';

    sort(words);
    for( int i { 0 }; i <  words.size(); ++i )
      if (i == 0 || words[i-1]!=words[i])
        cout << words[i] << '\n';
    //keep_window_open();
    return 0;

  }
 
