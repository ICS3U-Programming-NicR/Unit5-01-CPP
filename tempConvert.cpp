// Copyright (c) 2022 Nicolas Riscalas All rights reserved.
//
// Created by: Nicolas Riscalas
// Created on:April 25 2022
// This program makes a random number game

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::string;

void Fahrenheit() {
    while (true) {
        string tempCelcStr, tryAgain, garbage;
        float tempCelc, tempFahren;
        cout << "Enter the temperature in celcius: ";
        cin >> tempCelcStr;
        try {
            tempCelc = std::stof(tempCelcStr);
            tempFahren = (((static_cast<float>(9) / 5) * tempCelc) + 32);
            cout << "the temperature in Fahrenheit is: " << tempFahren;
        } catch (...) {
            cout << "you have to enter a real number";
        }
        cin.get();
        cout << "\nPress the <enter> key to restart the program: ";
        cin >> garbage;
        if (cin.get() == '\n')
            continue;
        else
            continue;
    }
}


int main() {
    Fahrenheit();
}
