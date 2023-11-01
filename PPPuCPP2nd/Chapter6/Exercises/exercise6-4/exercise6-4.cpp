//
//  main.cpp
//  exercise6-4
//
//  Created by Vitaly Ovchinnikov on 08.09.2023.
//

#include "../../../lib/std_lib_facilities.h"

class Name_value{
public:
    string name;
    int score;
    Name_value(string str, int val)
    :name(str), score(val) { }
};

bool uni(string name, vector<Name_value> names){
    for (int x = 0; x<names.size();++x) {
            if (name == names[x].name) {
                return true;
            }
        }
    return false;
}


int main()
  {
    vector<Name_value> names{};
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
            names.push_back(Name_value(name, score));
        }
        
    }
    
    for(int x = 0; x<names.size();++x)
    {
        cout << names[x].name << ", " << names[x].score <<   '\n';
    }
    return 0;
}
