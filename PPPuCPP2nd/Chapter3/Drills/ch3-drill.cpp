//
//  main.cpp
//  Drills
//
//  Created by Vitaly Ovchinnikov on 24.07.2023.
//

#include "../../lib/std_lib_facilities.h"

int main()
  {
    cout << "Введите имя адресата (и нажмите 'enter'):\n";
    string first_name { " " };
    cin >> first_name;
 
    cout << "Введите имя друга: \n";
    string friend_name { "" };
    cin >> friend_name;

    cout << "Укажите пол друга (m - мужской, f- женский)\n";
    char friend_sex { 0 };
    cin >> friend_sex;
    
    cout << "Введите возраст друга: \n";
    int age { 0 };
    cin >> age;



    cout << "Дорогой " << first_name << ",\n\n";
    
    cout << "Как дела? У меня все хорошо! Я скучаю по тебе!\n";
    cout << "И я начала изучать язык программирования C++!\n\n";

    cout << "Давно ли ты встерчал " << friend_name << "?\n";

    if (friend_sex=='m')
      cout << "Если ты увидишь " << friend_name
        << ", пожалуйста, попроси его позвонить мне.\n";
    else if (friend_sex=='f')
      cout << "Если ты увидишь " << friend_name
        << ", пожалуйста, попроси ее позвонить мне.\n";
    else
      cout << "Вы не правильно указали пол." << '\n';
     
    cout << "Я слышал, ты только что отметил день рождение и тебе исполнилось "
      << age << " лет.\n";
    if (age == 0 || age >= 100)
      simple_error("Ты шутишь!\n");

    else if (age == 12)
      cout << "На следующией год тебе исполнится " << ++age  << " лет.\n";
    else if (age == 17)
      cout << "В следущем году ты сможешь голосовать\n";
    else if (age >= 70)
      cout << "Я надеюсь, что ты не скучаешь на пенсии\n";

    cout << "\n\nИскрене твой,\n";
    cout << "\t\tunnmd!\n";
    //keep_window_open();
    return 0;

  }
