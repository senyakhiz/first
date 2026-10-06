#include <iostream>
#include "triangle1.h"

int main() {
    double a, h;
    std::cout << "Input side and height triangle";
    std::cin >> a;
    std::cin >> h;
    std::cout << "Square triangle" << Square(a, h);

    double side, height;
    std::cout << "Input side triangle: ";
    std::cin >> side;
    std::cout << "Input height triangle: ";
    std::cin >> height;

    Triangle t(side, height);
    std::cout << "Square triangle: " << t.getArea() << std::endl;

    return 0;
}