//
//  main.cpp
//  example5-7
//
//  Created by Vitaly Ovchinnikov on 15.08.2023.
//

#include "../../../lib/std_lib_facilities.h"



int main () {
    /// Не рабочий вариант
    /*
    vector<double> temps;
    
    for ( double temp; cin >> temp;)
        temps.push_back(temp);
    
    double sum       = 0;
    double high_temp = 0;
    double low_temp  = 0;
    
    for (int x: temps) {
        if (x > high_temp) high_temp = x;
        if (x < low_temp) low_temp = x;
        sum += x;
    }
    
    cout << "Максимальная температура: "
         << high_temp << '\n';
    cout << "Минимальная температура: "
         << low_temp << '\n';
    cout << "Средняя температура: "
         << sum/temps.size() << '\n';
     */
    
    constexpr double max_temp {9569.93};
    constexpr double min_temp {-459.67};
    
    double sum       = 0;
    double high_temp = min_temp;
    double low_temp  = max_temp;
    
    int no_of_temp   = 0;
    
    for (double temp; cin>>temp;) {
        ++no_of_temp;
        sum += temp;
        if (temp > high_temp) high_temp = temp;
        if (temp < low_temp) low_temp = temp;
    }
    
    cout << "Максимальная температура: "
         << high_temp << '\n';
    cout << "Минимальная температура: "
         << low_temp << '\n';
    cout << "Средняя температура: "
         << sum/no_of_temp << '\n';

    
    
     }
