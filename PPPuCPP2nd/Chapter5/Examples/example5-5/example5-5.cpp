//
//  main.cpp
//  example5-5
//
//  Created by Vitaly Ovchinnikov on 11.08.2023.
//

#include <iostream>

int area(int lenght, int width){
    return lenght*width;
}

int framed_area(int x, int y){
    return area(x-2,y-2);
}

int main(int argc, const char * argv[]) {
    
    int x { -1 };
    int y { 2 };
    int z { 4 };
    
    int area1 = area(x,y);
    int area2 = framed_area(1, z);
    int area3 = framed_area(y, z);
    double ratio = double(area1)/area3;
    return 0;
}
