//
//  main.cpp
//  exercise4-16
//
//  Created by Vitaly Ovchinnikov on 08.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

int main()
  {
    double val { 0 };
    double smallest { 0 };
    double biggest { 0 };
    vector<int> values{};
    vector<int> times{};
    vector<int> temp{};
    int max_value { 0 };
    int mode { 0 };
 

    cout << "Введите подследовательноть положительных чисел, по завершению введите | : ";
    while (cin >> val)
    {
        //cout << val;
        if (val < smallest){
            biggest = val;
            cout << " Наименьшее значение\n";
        }
        if (val>biggest){
            smallest = val;
            cout << " Наибольшее значение\n";
        }
        values.push_back(val);
    }
    
    sort(values);
    
    for(int i=0; i<values.size();++i){
        int idx { 0 };
        if(i==0 or values[i-1]!=values[i]){
            //cout << "шаг 1 - " << values[i] << '\n';
            for(int j=0; j<values.size();++j){
                if(values[i]==values[j]){
                    idx++;
                }
            }
            times.push_back(idx);
        }
    }
    
    for(int k=0; k<values.size();++k) if(k==0 or values[k-1]!=values[k]) temp.push_back(values[k]);
    
    
    for(int l=0; l<temp.size();++l){
        if (times[l] > max_value) {
            max_value = times[l];
            mode = temp[l];
            }
    }
    
    cout << "Модой является число - " << mode << " - оно повторяется - " << max_value << " раз\n";
    return 0;
  }
