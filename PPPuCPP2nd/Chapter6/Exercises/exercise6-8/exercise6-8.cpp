//
//  main.cpp
//  exercise6-8
//
//  Created by Vitaly Ovchinnikov on 31.10.2023.
//

#include "../../../lib/std_lib_facilities.h"

vector<char> generateSecretChar(){
    random_device rd;  // Генератор случайных чисел
    mt19937 gen(rd()); // Инициализируем генератор случайных чисел
    uniform_int_distribution<int> dist(97, 100); // Генерируем числа от 0
    //vector<int> secretNumber{};
    vector<char> secretChar{};
    for(int i=0; i<4; ++i){
        char randomChar = dist(gen);
        
        secretChar.push_back(randomChar);
    }
    return secretChar;
}

bool validateUserInput(vector<char> userGuess){
    
    for(int x: userGuess){
        if( x < 'a' or x > 'd'){
            return false;
            break;
        }
    }
    return true;
}

vector<char> enterUserGuess(){
    char input { ' ' };
    vector<char> userGuess{};
    while(cin>>input){
        userGuess.push_back(input);
        if(userGuess.size()==4) break;
    }
    
    return userGuess;
}

int compareNumbers(vector<char> secretChar, vector<char> userGuess){
    int bulls {0};
    int cows {0};
    for(char x: userGuess) cout << x << '\n';
    for(char x: secretChar) cout << x << ' ';
    for(int i=0; i<secretChar.size();++i){
        for(int j=0; j<userGuess.size();++j){
            if(secretChar[i]==userGuess[j] and i==j) ++bulls;
            else if (secretChar[i]==userGuess[j] and i!=j) ++cows;
        }
    }
    cout << '\n' <<bulls << " - быка(ов)) " << cows << " - корова(ов)\n";
    return bulls;
}


int main() {
    try{
        const vector<char> secretChar = generateSecretChar();
        int bulls {0};
        
        cout << "Задачей пользователя является отгадать буквы, делая \n" <<
                "повторные попытки. Предположим, что буквы, которое нужно \n" <<
                "угадать, - это abcd, и пользователь предполагает, что это \n" <<
                "cdba; ответ должен быть 1 бык и 1 корова, потому что \n" <<
                "пользователь угадал одну букву (1) правильно и в правильной \n" <<
                "позиции (бык) и одну букву (3) правильно, но в неправильной \n" <<
                "позиции (корова). Угадывание продолжается до тех пор, пока \n" <<
                "пользователь не получит четыре быка, то есть не угадает все \n" <<
                "четыре буквы в правильном порядке.\n";
        cout << "Введите через пробел 4 буквы от a до d: ";
        while(bulls!=4){
            vector<char> userGuess=enterUserGuess();
            if(validateUserInput(userGuess))
            {
                bulls=compareNumbers(secretChar, userGuess);
            } else {
                cout << "Валидация не удалась\n";
            }
        }
        cout << "Игра закончена\n";
        return 0;
    } catch (const std::exception& e) {
        cerr << "Ошибка: " << e.what() << std::endl;
    } catch (...) {
        cerr << "Unknown exception!\n";
        return 2;
    }
}
