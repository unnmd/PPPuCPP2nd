//
//  main.cpp
//  exercise5-13
//
//  Created by Vitaly Ovchinnikov on 23.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

int main() {
    //Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, or Sunday
    vector<int> Monday{};
    vector<int> Tuesday{};
    vector<int> Wednesday{};
    vector<int> Thursday{};
    vector<int> Friday{};
    vector<int> Saturday{};
    vector<int> Sunday{};
    vector<int> rejectedValues{};
    
    string inputDay { " " };
    int inputValue { 0 };
    
    while(cin>>inputDay>>inputValue){
        if(inputDay=="Monday" or inputDay=="Mon"){
            Monday.push_back(inputValue);
        }
        else if(inputDay=="Tuesday" or inputDay=="Tue"){
            Tuesday.push_back(inputValue);
        }
        else if(inputDay=="Wednesday" or inputDay=="Wed"){
            Wednesday.push_back(inputValue);
        }
        else if(inputDay=="Thursday" or inputDay=="Thu"){
            Thursday.push_back(inputValue);
        }
        else if(inputDay=="Friday" or inputDay=="Fri"){
            Friday.push_back(inputValue);
        }
        else if(inputDay=="Saturday" or inputDay=="Sat"){
            Saturday.push_back(inputValue);
        }
        else if(inputDay=="Sunday" or inputDay=="Sun"){
            Sunday.push_back(inputValue);
        }
        else{
            rejectedValues.push_back(inputValue);
        }
        
        
    }
    int MondaySum { 0 };
    cout << "Monday: ";
    for(int x: Monday) MondaySum+=x;
    cout  << MondaySum << '\n';
    int TuesdaySum { 0 };
    cout << "Tuesday: ";
    for(int x: Tuesday) TuesdaySum+=x;
    cout  << TuesdaySum << '\n';
    int WednesdaySum { 0 };
    cout << "Wednesday: ";
    for(int x: Wednesday) WednesdaySum+=x;
    cout  << WednesdaySum << '\n';
    int ThursdaySum { 0 };
    cout << "Thursday: ";
    for(int x: Thursday) ThursdaySum+=x;
    cout  << ThursdaySum << '\n';
    int FridaySum { 0 };
    cout << "Friday: ";
    for(int x: Friday) FridaySum+=x;
    cout  << FridaySum << '\n';
    int SaturdaySum { 0 };
    cout << "Saturday: ";
    for(int x: Saturday) SaturdaySum+=x;
    cout  << SaturdaySum << '\n';
    int SundaySum { 0 };
    cout << "Sunday: ";
    for(int x: Sunday) SundaySum+=x;
    cout  << SundaySum << '\n';
    
    int rejectedValuesSum { 0 };
    cout << "Отклоненые значения: ";
    for(int x: rejectedValues) rejectedValuesSum+=x;
    cout << rejectedValuesSum << '\n';
  
    
    return 0;
}




