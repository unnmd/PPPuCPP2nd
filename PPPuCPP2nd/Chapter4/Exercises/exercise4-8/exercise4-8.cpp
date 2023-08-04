//
//  main.cpp
//  exercise4-8
//
//  Created by Vitaly Ovchinnikov on 03.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

int main(){
    //1 - 1
    //2 - 2
    //3 - 4
    //4 - 8
    double cells { 1 };
    vector<double> cornNeeded {1000, 1000000, 1000000000};
    cout << "Ячейки" << '\t' << "Зерна" << '\n';
    //cout << 1 << "\t\t" << cells << '\n';
    for(int i { 1 }; i < 65; ++i){
        cout << i << "\t\t" << cells << '\n';
        for(int x : cornNeeded)
            if(x<=cells) cout << "Для зерна в количестве: " <<  x << " ,нужно "
                << i <<  " ячеек!\n";
        cells*=2;
    }
}
                                          
