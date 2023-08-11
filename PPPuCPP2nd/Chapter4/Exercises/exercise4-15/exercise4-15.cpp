//
//  main.cpp
//  exercise-4-14
//
//  Created by Vitaly Ovchinnikov on 08.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

bool isPrime(int x){
    for(int i { 2 }; i<=x/2; ++i){
        if (x%i==0) return false;
    }
    return true;
}

void findFirstPrime(int v){
    vector<int> primes{};
    int num = 2;
    while(primes.size()<v){
        if(isPrime(num)){
            primes.push_back(num);
        }
        ++num;
    }
    for(int v : primes) cout << v << '\n';
}

int main(){
    int n { 0 };
    cout << "Введите количество первый простых чисел:\n>>";
    cin >> n;
    findFirstPrime(n);
    return 0;
}
