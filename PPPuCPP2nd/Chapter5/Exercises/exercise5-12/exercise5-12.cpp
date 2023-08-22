//
//  main.cpp
//  exercise5-12
//
//  Created by Vitaly Ovchinnikov on 21.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

vector<int> generateSecretNumber(){
    random_device rd;  // Генератор случайных чисел
    mt19937 gen(rd()); // Инициализируем генератор случайных чисел
    uniform_int_distribution<int> dist(0, 9); // Генерируем числа от 0
    vector<int> secretNumber{};
    for(int i=0; i<4; ++i){
        int randomNum = dist(gen);
        secretNumber.push_back(randomNum);
    }
    return secretNumber;
}

bool validateUserInput(vector<int> userGuess){
    
    for(int x: userGuess){
        if( x < 0 or x > 9){
            return false;
            break;
        }
    }
    return true;
}

vector<int> enterUserGuess(){
    int input {0};
    vector<int> userGuess{};
    while(cin>>input){
        userGuess.push_back(input);
        if(userGuess.size()==4) break;
    }
    
    return userGuess;
}

int compareNumbers(vector<int> secretNumber, vector<int> userGuess){
    int bulls {0};
    int cows {0};
    for(int x: userGuess) cout << x;
    for(int i=0; i<secretNumber.size();++i){
        for(int j=0; j<userGuess.size();++j){
            if(secretNumber[i]==userGuess[j] and i==j) ++bulls;
            else if (secretNumber[i]==userGuess[j] and i!=j) ++cows;
        }
    }
    cout << '\n' <<bulls << " - быка(ов)) " << cows << " - корова(ов)\n";
    return bulls;
}


int main() {
    try{
        const vector<int> secretNumber = generateSecretNumber();
        int bulls {0};
        
        cout << "Задачей пользователя является отгадать эти числа, делая \n" <<
                "повторные попытки. Предположим, что число, которое нужно \n" <<
                "угадать, - это 1234, и пользователь предполагает, что это \n" <<
                "1359; ответ должен быть 1 бык и 1 корова, потому что \n" <<
                "пользователь угадал одну цифру (1) правильно и в правильной \n" <<
                "позиции (бык) и одну цифру (3) правильно, но в неправильной \n" <<
                "позиции (корова). Угадывание продолжается до тех пор, пока \n" <<
                "пользователь не получит четыре быка, то есть не угадает все \n" <<
                "четыре цифры в правильном порядке.\n";
        cout << "Введите через пробел 4 цифры от 0 до 9: ";
        while(bulls!=4){
            vector<int> userGuess=enterUserGuess();
            if(validateUserInput(userGuess))
            {
                bulls=compareNumbers(secretNumber, userGuess);
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
