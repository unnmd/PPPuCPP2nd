//
//  main.cpp
//  example4-6-2
//
//  Created by Vitaly Ovchinnikov on 01.08.2023.
//

#include "../../../lib/std_lib_facilities.h"


int main()
  {
    vector<int> v = {5, 7, 9, 4, 6, 8};
    for (int x:v) cout << x << endl;
    
    v.push_back(99);
    for (int x:v) cout << x << endl;

    
    //keep_window_open();
    return 0;

  }
 

