// Copyright (c) 2025 Jayden Smith All rights reserved.
// Created by: Jayden Smith
// Date: March 6, 2025
// Given user input, the circumference and area of a circle is calculated.

#include <cmath>
#include <iostream>
#include <iomanip>

int main() {
    // Then declare my variables
    float radius, circumference, area;
    std::cout << "Enter radius of the rectangle (cm): \n";
    std::cin >> radius;
    //Calculates the area and perimeter of the circle
    circumference= (M_PI * radius * 2);
    area =((M_PI * (pow(radius, 2))));
    // Code then displays information
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Circumference is: " << (circumference) << "cm\n";
    std::cout << "Area is: " << (area)<< "cm^2";
}
