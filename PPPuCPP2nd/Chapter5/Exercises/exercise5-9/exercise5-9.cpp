//
//  main.cpp
//  exercise5-9
//
//  Created by Vitaly Ovchinnikov on 18.08.2023.
//

//
//  main.cpp
//  exercise5-8
//
//  Created by Vitaly Ovchinnikov on 18.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

void findFirstNumbers(int v, vector<double> numbers){
    vector<double> selected_numbers{};
    double sum { 0 };
    for(int i = 0; i<v; ++i){
        selected_numbers.push_back(numbers[i]);
    }
    for(int j = 0; j<selected_numbers.size();++j){
        sum+=selected_numbers[j];
    }
    cout << "Сумма первых " << v << " чисел (";
    for(double v : selected_numbers) cout << v << ' ';
    cout << ") равна " << sum << '\n';
}

//
//  main.cpp
//  exercise5-8
//
//  Created by Vitaly Ovchinnikov on 18.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

void findFirstNumbers(int v, vector<int> numbers){
    vector<int> selected_numbers{};
    int sum { 0 };
    for(int i = 0; i<v; ++i){
        selected_numbers.push_back(numbers[i]);
    }
    for(int j = 0; j<selected_numbers.size();++j){
        sum+=selected_numbers[j];
    }
    cout << "Сумма первых " << v << " чисел (";
    for(int v : selected_numbers) cout << v << ' ';
    cout << ") равна " << sum << '\n';
}

int main(){
    try{
        int n { 0 };
        int val { 0 };
        vector<int> numbers{};
        cout << "Введите количество первый простых чисел:\n>>";
        cin >> n;
        if (!cin) throw runtime_error("Вы ввели, то что не явлется целым числом");
        if ( n < 1) throw runtime_error("Число должно быть от 1 и больше");
        cout << "Введите несколько целых чисел:\n>>";
        while(cin>>val){
            if (!cin) throw runtime_error("Вы ввели, то что не явлется целым числом");
            numbers.push_back(val);
        }
        if(n>numbers.size()){
            cout << "Вы пытаетесь просумировать чисел больше, чем в векторе!\n";
        }else{
            findFirstNumbers(n, numbers);
        }
    }catch (exception& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }
    catch (...) {
        cerr << "Unknown exception!\n";
        return 2;
    }
}
