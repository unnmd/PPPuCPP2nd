//
//  main.cpp
//  exercise4-17
//
//  Created by Vitaly Ovchinnikov on 10.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

int main()
  {
    string val { 0 };
    string smallest { 0 };
    string biggest { 0 };
    vector<string> values{};
    vector<int> times{};
    vector<string> temp{};
    int max_value { 0 };
    string mode { 0 };
 

    cout << "Введите несколько слов, через пробел, по звершению нажмите на CTRL+D: ";
    while (cin >> val)
    {
        cout << val;
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
    
    cout << "Модой является слово - " << mode << " - оно повторяется - " << max_value << " раз\n";
    return 0;
  }
