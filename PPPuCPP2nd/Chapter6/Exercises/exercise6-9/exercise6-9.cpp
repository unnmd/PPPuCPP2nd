//
//  main.cpp
//  exercise6-9
//
//  Created by Vitaly Ovchinnikov on 31.10.2023.
//

#include "../../../lib/std_lib_facilities.h"



int main() {
    char digit1, digit2, digit3, digit4;

    cout << "Enter a four-digit number: ";
    cin >> digit1 >> digit2 >> digit3 >> digit4;

    int thousands = digit1 - '0';
    int hundreds = digit2 - '0';
    int tens = digit3 - '0';
    int ones = digit4 - '0';

    int number = thousands * 1000 + hundreds * 100 + tens * 10 + ones;

    cout << number << " is " << thousands << " thousands, " << hundreds << " hundreds, " << tens << " tens, and " << ones << " ones." << endl;

    return 0;
}
