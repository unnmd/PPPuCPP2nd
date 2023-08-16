//
//  main.cpp
//  example5-5-1
//
//  Created by Vitaly Ovchinnikov on 11.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

int area(int lenght, int width){
    return lenght*width;
}

constexpr int frame_width { 2 };
int framed_area(int x, int y){
    return area(x-frame_width,y-frame_width);
}

int main(int argc, const char * argv[]) {
    
//    int x { -1 };
    int x { 2 };
    int y { 2 };
//    int z { 2 };
    int z { 4 };
    
    if(x<=0 || y<=0) error("Не положительный аргуемент функции area()");
    if(z<=2) error("Не положительный второй аргуемент функции area()"
                   " при вызове из функции framed_area()");
    if (y<=2 || z<=2) error("Не положительный аргуемент функции area()"
                            " при вызове из функции framed_area()");
    if(y-frame_width<=0 || z-frame_width<=0)
        error("Не положительный аргуемент функции area()"
                                " при вызове из функции framed_area()");
    int area1 = area(x,y);
    int area2 = framed_area(1, z);
    int area3 = framed_area(y, z);
    double ratio = double(area1)/area3;
    return 0;
}
