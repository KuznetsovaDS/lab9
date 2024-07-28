#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class InvalidTriangle {
public:
    InvalidTriangle() : message("стороны треугольника заданы некорректно") { }
    void printMessage() const { cout << message << endl; }
private:
    string message;
};
class Triangle {
private:
    double a, b, c;

public:
    Triangle(double side1, double side2, double side3) {
        if (!is_valid(side1, side2, side3)) {
            throw InvalidTriangle();
        }
        a = side1;
        b = side2;
        c = side3;
    }
    bool is_valid(double a, double b, double c) const {
        return (a + b > c) && (a + c > b) && (b + c > a);
    }

    double area() const {
        double s = (a + b + c) / 2; 
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
};
int main() {
    system("chcp 1251");
    cout << "введите три стороны треугольника ";
    double side1, side2, side3;
    cin >> side1 >> side2 >> side3;

    try {
        Triangle triangle(side1, side2, side3);
        cout << "Площадь " << triangle.area() << endl;
    }
    catch (InvalidTriangle& error) {
        cout << "ОШИБКА: ";
        error.printMessage();
        return 1; 
    }

    return 0;
}