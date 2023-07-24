//
//  main.cpp
//  example3-4
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
    cout << "Пожайлуйста, введите значение с плавоющей точкой: ";
    int n;
    cin >> n;
    cout << "n == " << n
         << "\nn+1 == " << n+1
         << "\nтри раза по n == " << 3*n
         << "\nдва раза по n == " << n+n
         << "\nn в квадрате == "  << n*2
         << "\nполовина n == "    << n/2
         << "\nкорень квадратный из n == " << sqrt(n)
         << '\n';
    //keep_window_open();
    return 0;

  }


