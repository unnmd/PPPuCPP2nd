//
//  main.cpp
//  try5-6-3
//
//  Created by Vitaly Ovchinnikov on 15.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

int main(){
    try {
        error("Error ...");
    }
    catch (exception& e) {
        cout << "Error: " << e.what() << '\n';
    }
}
