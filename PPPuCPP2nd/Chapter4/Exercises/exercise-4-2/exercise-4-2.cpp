//
//  main.cpp
//  exercise-42
//
//  Created by Vitaly Ovchinnikov on 01.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

int main()
  {
    vector<double> temps;
    for (double temp; cin>>temp;)
      temps.push_back(temp);

    //Вычисление средней температуры:
    double sum { 0 };
    for (int x : temps ) sum += x;
    cout << "Средняя температура: "
      << sum/temps.size() << "\n";

    //Вычисление медианы температуры
    sort(temps);
    cout << "Медиана температуры: " << temps[temps.size()/2] <<  '\n';

    double median {0};
    int idx = temps.size()/2;
    if (temps.size()%2 == 0)
        median = (temps[idx-1]+temps[idx])/2;
    else
        median = temps[idx];

    cout << "Медиана температуры: " << median <<  '\n';

    //keep_window_open();
    return 0;

  }
 
