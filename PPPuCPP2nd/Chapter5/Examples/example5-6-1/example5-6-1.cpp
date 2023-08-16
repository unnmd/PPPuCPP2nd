//
//  main.cpp
//  example5-6-1
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

class Bad_area { };

int main(int argc, const char * argv[]) {
    
    try{
        int x { -1 };
        int y { 2 };
        int z { 4 };
        int area1 = area(x,y);
        int area2 = framed_area(1, z);
        int area3 = framed_area(y, z);
        double ratio = double(area1)/area3;
    }catch (Bad_area){
        cout << "Неверный аргумент функции area()\n";
    }

    return 0;
}
