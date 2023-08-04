//
//  main.cpp
//  exercise4-12
//
//  Created by Vitaly Ovchinnikov on 04.08.2023.
//

#include "../../../lib/std_lib_facilities.h"


bool isPrime(int x){
    for(int i { 2 }; i<=x/2; ++i){
        if (x%i==0) return false;
    }
    return true;
}

int main(){
    int max { 0 };
    vector<int> primes{};
    cout << "Введите максимальное значение, до которого нужно найти все простые числа:\n>>";
    cin >> max;
    for(int i {2}; i<=max;++i){
        if(isPrime(i)){
            primes.push_back(i);
        }
    }
    for(int v : primes) cout << v << '\n';

    return 0;
}
