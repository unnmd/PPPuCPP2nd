//
//  main.cpp
//  exercise4-10
//
//  Created by Vitaly Ovchinnikov on 04.08.2023.
//

#include "../../../lib/std_lib_facilities.h"

int main(){
    vector<string> possibleMoves{"Камень","Ножницы","Бумага"};
    int userChoice { 0 }, computerChoice { 0 };
    int roundsPlayed { 1 };
    int userScore { 0 }, computerScore{ 0 }, draw { 0 };
    cout << "Ваш ход, введите цифру от 1 до 3, где 1 - Камень, 2 - Ножницы и  3 - Бумага или 0 для выхода\n";
    while(cin >> userChoice){
        cout << "Раунд № - " << roundsPlayed << '\n';
        computerChoice = rand()%3;
        switch (userChoice) {
            case 1:
                if(possibleMoves[0]==possibleMoves[computerChoice]) {
                    cout << possibleMoves[0] << '-' << possibleMoves[computerChoice]
                    << " = Ничья" << '\n';
                    ++draw;
                }
                else if (possibleMoves[computerChoice]==possibleMoves[1]){
                    cout << possibleMoves[0] << '-' << possibleMoves[computerChoice]
                    << " = Пользователь выйграл" << '\n';
                    ++userScore;
                }
                else if (possibleMoves[computerChoice]==possibleMoves[2]){
                     cout << possibleMoves[0] << '-' << possibleMoves[computerChoice]
                    << " = Компьютер выйграл" << '\n';
                    ++computerScore;
                }
                break;
            case 2:
                if(possibleMoves[1]==possibleMoves[computerChoice]) {
                    cout << possibleMoves[1] << '-' << possibleMoves[computerChoice]
                    << " = Ничья" << '\n';
                    ++draw;
                }
                else if (possibleMoves[computerChoice]==possibleMoves[2]){
                    cout << possibleMoves[1] << '-' << possibleMoves[computerChoice]
                    << " = Пользователь выйграл" << '\n';
                    ++userScore;
                }
                else if (possibleMoves[computerChoice]==possibleMoves[0]){
                     cout << possibleMoves[1] << '-' << possibleMoves[computerChoice]
                    << " = Компьютер выйграл" << '\n';
                    ++computerScore;
                }
                break;
            case 3:
                if(possibleMoves[2]==possibleMoves[computerChoice]) {
                    cout << possibleMoves[2] << '-' << possibleMoves[computerChoice]
                    << " = Ничья" << '\n';
                    ++draw;
                }
                else if (possibleMoves[computerChoice]==possibleMoves[0]){
                    cout << possibleMoves[2] << '-' << possibleMoves[computerChoice]
                    << " = Пользователь выйграл" << '\n';
                    ++userScore;
                }
                else if (possibleMoves[computerChoice]==possibleMoves[1]){
                     cout << possibleMoves[2] << '-' << possibleMoves[computerChoice]
                    << " = Компьютер выйграл" << '\n';
                    ++computerScore;
                }
                break;
            default:
                if(userChoice==0) return 0;
                cout << "Не корректный ввод! Повторите попытку!\n";
                break;
        }
        cout << "Счет:\n" << "Пользовтель" << '\t' << "Компьютер" << '\t' << "Ничья\n"
        << userScore << "\t\t" << computerScore << "\t\t" << draw << '\n';
        ++roundsPlayed;
        }
    return 0;
    }
