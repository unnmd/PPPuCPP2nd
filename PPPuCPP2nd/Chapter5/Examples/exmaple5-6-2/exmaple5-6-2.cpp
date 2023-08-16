//
//  main.cpp
//  exmaple5-6-2
//
//  Created by Vitaly Ovchinnikov on 15.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

int main() {
    try {
        vector<int> v;
        for (int x; cin>>x; )
            v.push_back(x);
        for(int i = 0; i<=v.size(); ++i)
            cout << "v[" << i << "]" << "==" << v[i] << '\n';
    } catch (out_of_range) {
        cerr << "Ошибка диапозона!\n";
    } catch(...){
        cerr << "Исключение: что-то пошло не так\n";
        return 2;
    }
    return 0;
}
