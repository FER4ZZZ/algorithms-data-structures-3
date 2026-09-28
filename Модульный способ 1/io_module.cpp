#include "io_module.h"
#include <iostream>
#include <iomanip>

void readCatheti(double &a, double &b) {
    std::cout << "Введите катеты a b: ";
    std::cin >> a >> b;
}

void printHypotenuse(double c) {
    std::cout << std::fixed << std::setprecision(4)
              << "Гипотенуза = " << c << std::endl;
}