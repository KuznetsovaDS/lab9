#include <iostream>
#include "Time_task2.h"
using namespace std;

int main() {
    system("chcp 1251");
    try {
        Time time1;
        cout << "Put first time \n";
        time1.input();
        time1.display();

        Time time2;
        cout << "Put second time \n";
        time2.input();
        time2.display();

        Time sumTime = time1.plus(time2);
        cout << "Summa of first and second ";
        sumTime.display();
    }
    catch (const Time::InvalidTime& e) {
        cerr << "Error " << e.getMessage() << endl;
    }

    return 0;
}