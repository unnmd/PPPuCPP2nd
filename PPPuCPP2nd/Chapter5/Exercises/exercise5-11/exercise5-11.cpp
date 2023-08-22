//
//  main.cpp
//  exercise5-11
//
//  Created by Vitaly Ovchinnikov on 18.08.2023.
//

#include "../../../lib/std_lib_facilities.h"






int main() {
    int currentFibonacciNumber = 1;
    int previousFibonacciNumber = 0;
    int nextFibonacciNumber = 0;
    int maxFibonacciNumber = 1836311900;

    // Начальные значения для чисел Фибоначчи: 0 и 1.

    while (nextFibonacciNumber<=maxFibonacciNumber) {
        // Обновляем следующее число Фибоначчи как сумму текущего и предыдущего.
        nextFibonacciNumber = currentFibonacciNumber + previousFibonacciNumber;
        
        // Обновляем переменные для следующей итерации.
        previousFibonacciNumber = currentFibonacciNumber;
        currentFibonacciNumber = nextFibonacciNumber;
        cout << previousFibonacciNumber << '\n';
    }
    return 0;
}
