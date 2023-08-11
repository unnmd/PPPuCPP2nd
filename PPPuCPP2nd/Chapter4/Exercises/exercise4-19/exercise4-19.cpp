//
//  main.cpp
//  exercise4-19
//
//  Created by Vitaly Ovchinnikov on 10.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

bool uni(string name, vector<string> names){
    for (string existingName : names) {
            if (name == existingName) {
                return true;
            }
        }
    return false;
}


int main()
  {
    vector<string> names{};
    vector<int> scores{};
    string name { " " };
    int score { 0 };
    cout << "Введите набор пар состоящий из имени и балла. Например: Joe 17 Barbara 22\n";
    
    while (cin >> name >> score) {
        if(uni(name,names)){
            cout << "Введенное имя уже есть в списке" << '\n';
        }
        else if(name == "NoName" || score == 0){
            break;
        }
        else{
            names.push_back(name);
            scores.push_back(score);
        }
        
    }
    
    for(int x = 0; x<names.size();++x)
    {
        cout << names[x] << ", " << scores[x] <<   '\n';
    }
    return 0;
}
