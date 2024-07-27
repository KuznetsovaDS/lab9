#include <iostream>
#include "Time_task2.h"
using namespace std;

int main() {
    system("chcp 1251");
    try {
        Time time1;
        cout << "������� ������ ����� ";
        time1.input();
        time1.display();

        Time time2;
        cout << "������� ������ ����� ";
        time2.input();
        time2.display();

        Time sumTime = time1.plus(time2);
        cout << "����� ";
        sumTime.display();
    }
    catch (const Time::InvalidTime& e) {
        cerr << "������ " << e.getMessage() << endl;
    }

    return 0;
}