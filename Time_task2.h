#pragma once
#include <string>
using namespace std;

class Time {
public:
    class InvalidTime {
    public:
        InvalidTime(string msg) : message(msg) {}
        const string& getMessage() const { return message; }
    private:
        string message;
    };

    Time();
    Time(int hours, int minutes, int seconds);

    void display() const;
    Time plus(const Time& t2) const;
    void input();

private:
    int hours;
    int minutes;
    int seconds;

    void normalTime();
    void valid(int hours, int minutes, int seconds);
};