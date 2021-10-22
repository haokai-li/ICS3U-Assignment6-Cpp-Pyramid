// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Oct 2021
// This Program calculate the volume of a pyramid
#include <iostream>
#include <string>

float VolumePyramid(float lengthNumber, float widthNumber, float heightNumber) {
    // This Program calculate the volume of a pyramid
    float volume;

    // process
    volume = (lengthNumber * widthNumber * heightNumber) / 3;

    return volume;
}

main() {
    // This function just call other functions
    std::string userLengthString;
    float userLengthNumber;
    std::string userWidthString;
    float userWidthNumber;
    std::string userHeightString;
    float userHeightNumber;
    float volumePyramid;

    std::cout << "This Program calculates the volume of a pyramid."
    << std::endl;
    std::cout << "Please enter the length, width and height." << std::endl;
    std::cout << "" << std::endl;

    // input
    std::cout << "Please enter the length of a pyramid(cm): ";
    std::cin >> userLengthString;
    std::cout << "Please enter the width of a pyramid(cm): ";
    std::cin >> userWidthString;
    std::cout << "Please enter the height of a pyramid(cm): ";
    std::cin >> userHeightString;
    std::cout << "" << std::endl;

    try {
        userLengthNumber = std::stof(userLengthString);
        userWidthNumber = std::stof(userWidthString);
        userHeightNumber = std::stof(userHeightString);

        // call functions
        volumePyramid = VolumePyramid(userLengthNumber,
                                      userWidthNumber,
                                      userHeightNumber);

        // output
        std::cout << "The volume of the pyramid is "
        << volumePyramid << " cm³." << std::endl;
    } catch (std::invalid_argument) {
        // output
        std::cout << "You didn't enter an integer." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
