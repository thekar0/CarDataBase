#pragma once
#include <string>

class CarClass {
public:
    std::string brand;
    int yearMade;
    double mileage;

    CarClass(std::string brand, int yearMade, double mileage);
};