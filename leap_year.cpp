// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: October 2019
// This is the leap year program

#include <iostream>

int main() {
    // This function runs the leap year program

    // Variables
    int year;

    // Input
    std::cout << "Enter a year: ";
    std::cin >> year;
    std::cout << "" << std::endl;

    // process & output
    if (year % 4 == 0) {
      if (year % 100 == 0) {
         if (year % 400 == 0)
            std::cout << year << " is a leap year." << std::endl;
         else
            std::cout << year << " is not a leap year." << std::endl; }
      else
         std::cout << year << " is a leap year." << std::endl; }
    else
      std::cout << year << " is not a leap year." << std::endl;
}
