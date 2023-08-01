//
//  main.cpp
//  exercise4-3
//
//  Created by Vitaly Ovchinnikov on 01.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

int main()
  {
    vector<double> distances {  };
    double sum = 0;

    for(double distance; cin >> distance;){
      distances.push_back(distance);
      sum += distance;
    }

    if(distances.size() == 0) cout << "Вы не ввели данные\n";
    
    double largest { distances[0] };
    double smallest { distances[0] };
    for(double x: distances){
      if(x<smallest) smallest = x;
      if(x>largest) largest = x;
    }

    cout << "Общие расстояние: " << sum << '\n';
    cout << "Наименьшее расстояние: " << smallest << '\n';
    cout << "Наибольшее расстояние: " << largest << '\n';
    cout << "Среднее расстояние: " << sum/distances.size() << '\n';
    //keep_window_open();
    return 0;

  }
 
