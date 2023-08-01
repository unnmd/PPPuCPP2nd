//
//  main.cpp
//  example4-4-1-3
//
//  Created by Vitaly Ovchinnikov on 01.08.2023.
//

#include "../../../lib/std_lib_facilities.h"


int main()
  {
    //error 1
    //
    //cout << "Вы любите рыбу?\n";
    //string s;
    //cin >> s;
    //switch (s) {
      //case "нет":
        ////...
        //break;
      //case "да":
        ////..
        //break;
    //}

    //error 2

    //int y { 'y' };
    //constexpr char n { 'n' };
    //constexpr char m { 'm' };
    //cout << "Вы любите рыбу?\n";
    //char a;
    //cin >> a;
    //switch (a) {
      //case y:
        ////...
        //break;
      //case m:
        ////..
        //break;
      //case 'n':
        ////...
      //default:
        ////..
        //break;
    //}

    cout << "Пожалуйста, введите цифру\n";
    char a { ' ' };
    cin >> a;

    switch (a) {
      case '0': case '2': case '4': case '6': case '8':
        cout << "четная\n";
        break;
      case '1': case '3': case '5': case '7': case '9':
        cout << "не четная\n";
        break;
      default:
        cout << "не цифра\n";


    }



      
    
    //keep_window_open();
    return 0;

  }
