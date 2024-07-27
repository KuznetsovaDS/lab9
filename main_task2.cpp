#include <iostream>
#include "Time_task2.h"
using namespace std;

int main() {
    system("chcp 1251");
    try {
        Time time1;
        cout << "Введите первое время ";
        time1.input();
        time1.display();

        Time time2;
        cout << "Введите второе время ";
        time2.input();
        time2.display();

        Time sumTime = time1.plus(time2);
        cout << "Сумма ";
        sumTime.display();
    }
    catch (const Time::InvalidTime& e) {
        cerr << "Ошибка " << e.getMessage() << endl;
    }

    return 0;
}