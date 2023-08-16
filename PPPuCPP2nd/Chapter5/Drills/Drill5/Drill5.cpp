//
//  main.cpp
//  Drill5-1
//
//  Created by Vitaly Ovchinnikov on 16.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

int main () {
    try {
        //1. Исправил Cout на cout - Сout << "Success!\n";
        cout << "1. Success!\n";
        //2. Исправил пропущенную ковычку " - cout << "Success!\n;
        cout << "2. Success!\n";
        //3. Исправил пропущенную ковычку " - cout << "Success" << !\n"
        cout << "3. Success!" << "\n";
        //4. Исправил пропущенную ковычки " - cout << success << '\n';
        cout << "4. Success!" << '\n';
        //5. Исправил тип string res на int res - string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
        int res = 7;
        vector<int> v(10);
        v[5] = res;
        cout << "5. Success!\n";
        //6. -Исправил скобки вектора с v() на v[] - vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";
        vector<int> v6(10);
        v6[5] = 7;
        if (v6[5]!=7) cout << "6. Success!\n"; //Логисческая ошибка
        //7. Пропущена иницализация cond
        bool cond = true;
        if (cond)
            cout << "7. Success!\n";
        else
            cout << "Fail!\n";
        //8. Логическая ошибка в условии if (c)
        bool c8 = false;
        if (!c8)
            cout << "8. Success!\n";
        else
            cout << "Fail!\n";
        //9. Логическая ошибка в условии bool c = "fool"<s;
        string s9 = "ape";
        bool c9 = "fool">s9;
        if (c9) cout << "9. Success!\n";
        //10. Логическая ошибка в условии s == "fool"
        string s10 = "ape";
        if (s10!="fool")
            cout << "10. Success!\n";
        //11. Логическая ошибка в условии s == "fool" и синтакситеческая ошибка в  cout < "Success!\n";
        string s11 = "ape";
        if (s11!="fool")
            cout << "11. Success!\n";
        //12. Логическая ошибка в условии s + "fool" и синтакситеческая ошибка в  cout < "Success!\n";
        string s12 = "ape";
        if (s12!="fool")
            cout << "12. Success!\n";
        //13. В условии for был бесконечный цикл 0<v13.size() и стоял символ ; закрывая пустое тело цикла
        vector<char> v13(5);
        for (size_t i=0; i<v13.size(); ++i)
            cout << "13. Success!\n";
        //14. Стоял символ ; закрывая пустое тело цикла
        vector<char> v14(5);
        for (int i=0; i<=v14.size(); ++i)
            cout << "14. Success!\n";
        //15.  Ошибка в условии цикла i<6
        string s15 = "15. Success!\n";
        for (int i=0; i<s15.size(); ++i)
            cout << s15[i];
        //16. then - не инициализированно, else не будет никогда выполнено
        if (true)
            cout << "16. Success!\n";
        else
            cout << "Fail!\n";
        //17. В строке char c = x; попытка сужающего приобразования - int x = 2000; char c = x; if (c==2000) cout << "Success!\n";
        int x17 = 2000;
        int c17 = x17;
        if (c17==2000)
            cout << "17. Success!\n";
        //18. Ошибка в условии цикла i<10
        string s18 = "18. Success!\n";
        for (int i=0; i<s18.size(); ++i)
            cout << s18[i];
        //19. Не объявлен тип вектора vector v(5) и ошибка диапазона в условии цикла i<=v19.size();
        vector<int> v19(5);
        for (int i=0; i<v19.size(); ++i)
            cout << "19. Success!\n";
        //20. Ошибка в теле цикла ++j20;
        int i20 = 0;
        int j20 = 9;
        while (i20<10)
            ++i20;
        if (j20<i20)
            cout << "20. Success!\n";
        //21. Исправил double d = 5.0/(x21-2); используем явное деление с плавающей запятой, добавив десятичную точку к числу 5. Теперь результат деления будет корректным.
        int x21 = 2;
        double d = 5.0/(x21-2);
        if (d==2*x21+0.5)
            cout << "21. Success!\n";
        //22. Ошибка в инициализации string<char> s = "Success!\n" и в теле цикла
        string s22 = "22. Success!\n";
        for (int i=0; i<s22.size(); ++i)
            cout << s22[i];
        //23. Не инициализировали j и ошибка в теле цикла
        int i23=0;
        int j23=9;
        while (i23<10)
            ++i23;
        if (j23<i23)
            cout << "23. Success!\n";
        //24. Исправил double d = 5.0/(x21-2); используем явное деление с плавающей запятой, добавив десятичную точку к числу 5. Теперь результат деления будет корректным.
        int x24 = 4;
        double d24 = 5.0/(x24-2);
        if (d24=2*x24+0.5)
            cout << "24. Success!\n";
        //25.
        cout << "25. Success!\n";
        //keep_window_open();
        return 0;
    }
    catch (exception& e) {
        cerr << "error: " << e.what() << '\n'; keep_window_open();
        return 1;
    }
    catch (...) {
        cerr << "Oops: unknown exception!\n"; keep_window_open();
        return 2;
    }
}
