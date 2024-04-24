#include <iostream>
#include <vector>
#include "Functions.h"
#include "CarClass.h"

int main() {
    std::cout << "====================\nCAR DATABASE PROGRAM\n====================\n";

    std::vector<CarClass> TemporaryData;

    int userInput = 0;

    while (userInput != 5) {
        std::cout << "What do you want to do?\n1. Add a car to the database\n2. Delete a car from the database\n3. Find a car in the database\n4. Print the database\n5. Exit the program\n====================\n";
        std::cin >> userInput;

        switch (userInput) {
        case 1:
            std::cout << "=================================\nHow many cars do you want to add?\n=================================\n";
            int userInputAmountOfCarsToAdd;
            std::cin >> userInputAmountOfCarsToAdd;
            for (int i = 0; i < userInputAmountOfCarsToAdd; i++) {
                std::cout << "====================\nADDING CAR NUMBER " << i + 1 << "\n";

                std::string model;
                std::string brand;
                int yearMade;
                double mileage;

                std::cout << "Model: ";
                std::cin >> model;

                std::cout << "Brand: ";
                std::cin >> brand;

                std::cout << "Year made: ";
                std::cin >> yearMade;

                std::cout << "Mileage: ";
                std::cin >> mileage;

                CarClass car;
                car.model = model;
                car.brand = brand;
                car.yearMade = yearMade;
                car.mileage = mileage;

                TemporaryData.push_back(car);
            }
            std::cout << "====================\n" << userInputAmountOfCarsToAdd << " Cars added!\n====================\n";
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            std::cout << "==============================\nPrinting the Temporary Data...\n==============================\n";
            for (const auto& car : TemporaryData) {
                std::cout << "Model: " << car.model << "\nBrand: " << car.brand << "\nYear made: " << car.yearMade << "\nMileage: " << car.mileage << "\n====================\n";
            }
            break;
        case 5:
            std::cout << "Exiting...\n";
            break;
        default:
            std::cout << "Incorrect Value! Please try again\n";
            break;
        }
    }

    return 0;
}