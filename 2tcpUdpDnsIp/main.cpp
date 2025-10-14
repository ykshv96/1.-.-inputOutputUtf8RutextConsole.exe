#include <iostream>                 // ввод/вывод
#include <string>

using namespace std;

int main() {

    system("chcp 65001 > nul");    // переключаем кодовую страницу консоли в UTF-8

    string answer1;                
    string answer2;      

    cout << "1/3 Что такое TCP? "; // вопрос
    getline(cin, answer1); // ответ с пробелами. getline - считывает строку с пробелами
    cout << "Ваш ответ: " << answer1 << endl; // вывод ответа
    cout << "Правильный ответЖ: TCP - это протокол обмена данными в сети интернет." << endl;

    cout << "2/3 Что такое DNS? ";
    getline(cin,answer2);
    cout << "Ваш ответ: " << answer2 << endl;
    cout << "Правильный ответ: DNS - это система выдачи IP адреса взамен доменного имени сайта." << endl;

    system("pause");
    return 0;       
}