//
//  main.cpp
//  try5-5-3
//
//  Created by Vitaly Ovchinnikov on 11.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

int area(int lenght, int width){
//    if(lenght<=0 || width<=0) error("Не положительный аргуемент функции area()");
    return lenght*width;
}


int framed_area(int x, int y){
    constexpr int frame_width { 2 };
//    if(x-frame_width<=0 || y-frame_width<=0)
//        error("Не положительный аргуемент функции area()"
//                " при вызове из функции framed_area()");
    return area(x-frame_width,y-frame_width);
}

int f(int x, int y, int z){
    int area1 = area(x,y);
    if (area1<=0) error("Не положительная площадь");
    int area2 = framed_area(1, z);
    int area3 = framed_area(y, z);
    double ratio = double(area1)/area3;
    
    return 0;
}

int main(int argc, const char * argv[]) {
    
    int x { 0 };
    int y { 0 };

    int z { 0 };
    
    while (cin >> x >> y >> z) {
        cout << "x:" << x << ", y:" << y << ", z:" << z << '\n';
        f(x, y, z);
    }
    return 0;
}
