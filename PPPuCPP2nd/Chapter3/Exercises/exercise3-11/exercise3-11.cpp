//
//  main.cpp
//  exercise3-11
//
//  Created by Vitaly Ovchinnikov on 24.07.2023.
//

#include "../../../lib/std_lib_facilities.h"

int main()
  {
    double total { 0 };

    cout << "Сколько у вас одноцентовых монет?\n";
    int onecent { 0 };
    cin >> onecent;
    total += onecent;
      
    cout << "Сколько у вас пятицентовых монет?\n";
    int fivecent { 0 };
    cin >> fivecent;
    total += fivecent*5;

    cout << "Сколько у вас десятицентовых монет?\n";
    int tencent { 0 };
    cin >> tencent;
    total += tencent*10;

    cout << "Сколько у вас двадцатипятицентовых монет?\n";
    int twentyfivecent { 0 };
    cin >> twentyfivecent;
    total += twentyfivecent*25;

    cout << "Сколько у вас пятидесятицентовых монет?\n";
    int fiftycent { 0 };
    cin >> fiftycent;
    total += fiftycent*50;

    cout << "Сколько у вас долларовых монет?\n";
    int dollar { 0 };
    cin >> dollar;
    total += dollar*100;
   
    cout << "Общая стоимость ваших монет равна "
      << total << " центам \n";

    //part 2

    if (onecent==1)
      cout << "У вас 1 одноцентовая монета\n";
    else
      cout << "У вас " << onecent << " одноцентовых монет\n";
    
    if (fiftycent==1)
      cout << "У вас 1 пятицентовая монета\n";
    else
      cout << "У вас " << fivecent << " пятицентовых монет\n";
    
    if (tencent==1)
      cout << "У вас 1 десятицентовая монета\n";
    else
      cout << "У вас " << tencent << " одноцентовых монет\n";

    if (twentyfivecent==1)
      cout << "У вас 1 двадцтипятицентовая монета\n";
    else
      cout << "У вас " << twentyfivecent << " двадцатипятицентовых монет\n";

    if (fiftycent==1)
      cout << "У вас 1 пятидесятицентовая монета\n";
    else
      cout << "У вас " << onecent << " пятидесятицентовык монет\n";

    if (dollar==1)
      cout << "У вас 1 долларовая монета\n";
    else
      cout << "У вас " << dollar << " долларовых монет\n";

    total /= 100;
    
    int intdollar = total;
     
    cout << "У вас " << intdollar;
      if (intdollar==1)
        cout << " доллар "<< (total - intdollar)*100 << " цента\n";
      else
        cout << " долларов "<< (total - intdollar)*100 << " цента\n";

    //keep_window_open();
    return 0;
  }

