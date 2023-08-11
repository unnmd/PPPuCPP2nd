//
//  main.cpp
//  exercise4-13
//
//  Created by Vitaly Ovchinnikov on 04.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

void sieveOfEratosthenes(int n) {
    vector<int> isPrime(n + 1, true);

    for (int p = 2; p * p <= n; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }

    cout << "Простые числа от 2 до " << n << ":\n";
    for (int p = 2; p <= n; ++p) {
        if (isPrime[p]) {
            cout << p << '\n';
        }
    }
}

int main() {
    int maxNumber { 0 };
    cout << "Введите максимальное число для поиска простых чисел:\n";
    cin >> maxNumber;

    sieveOfEratosthenes(maxNumber);

    return 0;
}
