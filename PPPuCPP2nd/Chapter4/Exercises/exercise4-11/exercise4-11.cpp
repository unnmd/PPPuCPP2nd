//
//  main.cpp
//  exercise4-11
//
//  Created by Vitaly Ovchinnikov on 04.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

//int isPrime(int x)
//{
//    int result { 0 };
//    for (int i = 1; i < x; i ++)
//    {
//        if ( x % i == 0 )
//        {
//            result = i;
//        }
//    }
//    return result;
//}

bool isPrime(int x){
    for(int i { 2 }; i<=x/2; ++i){
        if (x%i==0) return false;
    }
    return true;
}

int main(){
    vector<int> primes{};
    for(int i {2}; i<=100;++i){
        //if(isPrime(i)==1){
        if(isPrime(i)){
            primes.push_back(i);
        }
    }
    for(int v : primes) cout << v << '\n';

    return 0;
}
