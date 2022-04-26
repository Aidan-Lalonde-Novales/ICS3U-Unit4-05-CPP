// Copyright (c) 2022 Aidan Lalonde-Novales All rights reserved

// Created by Aidan Lalonde-Novales
// Created on 2022-04-26
// This program adds a desired amount of numbers together with user input.

#include <iostream>
#include <string>

int main() {
    // this function asks for the number of times to add numbers
    // then asks for what numbers in specific to add.
    std::string addLoopString;
    int addLoop;  // how many #'s to add
    std::string numberToAddString;
    int numberToAdd;  // which numbers to add
    int timesAdded = 0;
    int totalSum = 0;

    // input
    std::cout << "Enter how many numbers you want to add: ";
    std::cin >> addLoopString;

    // additional input & process
    try {
        addLoop = std::stoi(addLoopString);

        for (timesAdded = 0; timesAdded < addLoop; timesAdded++) {
            std::cout << "Enter a number: ";
            std::cin >> numberToAddString;
            numberToAdd = std::stoi(numberToAddString);

            if (numberToAdd < 0) {
                continue;
            }

            totalSum = totalSum + numberToAdd;
        }

        // output
        std::cout << "\nThe sum of your numbers is " << totalSum
        << "." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "\nYour integer is invalid. Please re-run." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
