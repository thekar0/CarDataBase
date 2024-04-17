#include <iostream>
#include <string>
#include "Functions.h"
#include "CarClass.h"

void addCar(int Cars[10]) {
    std::string brand;
    int yearMade;
    double mileage;

    std::cout << "Brand: ";
    std::cin >> brand;

    std::cout << "Year made: ";
    std::cin >> yearMade;

    std::cout << "Mileage: ";
    std::cin >> mileage;

    CarClass car(brand, yearMade, mileage);
}