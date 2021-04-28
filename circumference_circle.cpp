// Copyright (c) 2021 Malcolm Tompkins All rights reserved
//
// Created by Malcolm Tompkins
// Created on April 28, 2021
// Calculates circumference of user input
#include <iostream>
#include <iomanip>
const double TAU = 6.28;
int radius;
double circumference;
int main() {
    // Function that calculates circumference
    std::cout << "Input the radius of the circle: ";
    std::cin >> radius;
// User input
    circumference = TAU * radius;
// Process
    std::cout << "The circumference is: " << circumference << " cm";
}
