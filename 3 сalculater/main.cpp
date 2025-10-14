#include <iostream>
#include <string>

using namespace std;

int main() {

    system("chcp 65001 > nul");

    double one = 0.0;
    double two = 0.0;

    string operation = "+";

    cout << "Введите первое число: ";
    cin >> one;

    cout << "Введите второе число: ";
    cin >> two;

    cout << "Введите операцию (help, +, -, *, /): ";
    cin >> operation;

    if (operation == "help") {
        cout << "тут подробное описание. введите два компонента и выберите действие которое вы хотите сделать с ними" << endl;
        return 0;
    }

    double result = 0.0;

    if (operation == "+") {
        result = one + two;
    } else if (operation == "-") {
        result = one - two;
    } else if (operation == "*") {
        result = one * two;
    } else if (operation == "/") {
        if (two == 0) {
            cout << "внимание. ноль не приемлемое число." << endl;
            return 1;
        }
        result = one / two;
    } else {
        cout << "неизвестная операция: " << operation << endl;
        return 1;
    }

    cout << "на жри свой ответ: " << result << endl;
    system("pause");

    return 0;
}