//
//  main.cpp
//  exercise4-20
//
//  Created by Vitaly Ovchinnikov on 10.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

bool uniq(string name, vector<string> names){
    for (string existingName : names) {
            if (name == existingName) {
                return true;
            }
        }
    return false;
}

int selectName(string findName, vector<string> names){
        int idx {-1};
        int i {0};

        while ((idx == -1) && (i < names.size())) {
            if (names[i] == findName) idx = i;
            ++i;
        }

        return idx;
}


int main(){
    vector<string> names{};
    vector<int> scores{};
    string name { " " };
    int score { 0 };
    cout << "Введите набор пар состоящий из имени и балла. Например: Joe 17 Barbara 22\n";
    
    while (cin >> name >> score) {
        if(uniq(name,names)){
            cout << "Введенное имя уже есть в списке \n";
        }
        else if(name == "NoName" || score == 0){
            break;
        }
        else{
            names.push_back(name);
            scores.push_back(score);
        }
    }
    
//    for(int x = 0; x<names.size();++x)
//    {
//        cout << names[x] << ", " << scores[x] <<   '\n';
//    }
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    int idx { 0 };
    string findName;
    cout << "Введите имя для получения балллов: ";
    while(cin>>findName){
//    while(getline(cin, findName)){
        idx = selectName(findName, names);
        if (idx == -1)
                    cout << "Error: Имя не найдено\n";
                else
                    cout << "У " << findName << " очков " << scores[idx] << '\n';
                cout << "Введите имя для получения балллов: ";
        
    }
        
    return 0;
}
