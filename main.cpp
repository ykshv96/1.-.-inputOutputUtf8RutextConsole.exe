#include <iostream>                 // ввод/вывод
using namespace std;

int main() {
    system("chcp 65001 > nul");    // переключаем кодовую страницу консоли в UTF-8

    int age;                      // переменная для возраста
    cout << "введите ваш возраст.. ";
    cin >> age;
    cout << "вам " << age << " лет" << endl;

    system("pause");               // пауза, чтобы окно не закрывалось сразу
    return 0;
}