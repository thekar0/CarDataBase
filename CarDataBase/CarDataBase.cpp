#include <iostream>
#include <vector>
#include "Functions.h"
#include "CarClass.h"

int main() {
    int userInput = 0;

    while (userInput != 5) {
        std::cout << "====================\nCAR DATABASE PROGRAM\n====================\n";
        std::cout << "What do you want to do?\n1. Add a car to the database\n2. Delete a car from the database\n3. Find a car in the database\n4. Print the database\n5. Exit the program\n====================\n";

        std::cin >> userInput;

        switch (userInput) {
        case 1:
            std::cout << "How many cars do you want to add?\n";
            int userInputAmountOfCarsToAdd;
            std::cin >> userInputAmountOfCarsToAdd;
            for (int i = 0; i < userInputAmountOfCarsToAdd; i++) {
                std::cout << "====================\nADDING CAR NUMBER " << i + 1 << "\n";
                addCar();
            }
            std::cout << "====================\n" << userInputAmountOfCarsToAdd << " Cars added!\n";
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
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