//
//  main.cpp
//  execrcise4-21
//
//  Created by Vitaly Ovchinnikov on 11.08.2023.
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

int selectScore(int findScore, vector<int> scores){
        int idx {-1};
        int i {0};

        while ((idx == -1) && (i < scores.size())) {
            if (scores[i] == findScore) idx = i;
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
    int findScore;
    cout << "Введите имя для получения балллов: ";
    while(cin>>findScore){
//    while(getline(cin, findScore)){
        idx = selectScore(findScore, scores);
        if (idx == -1)
                    cout << "Error: Имя не найдено\n";
                else
                    cout << "У " << names[idx] << " очков " << findScore << '\n';
                cout << "Введите имя для получения балллов: ";
        
    }
        
    return 0;
}
