//
//  main.cpp
//  exercise5-2
//
//  Created by Vitaly Ovchinnikov on 17.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

double ctok(double c) {
    int k = c + 273.15;
    return k;
}
int main() {
    double c = 0;
    cin >> c;
    double k = ctok(c);
    cout << k << '\n';
}
