// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Roman Cernetchi
// Created on: January 2021
// This program prints 10 random integers and finds the average

#include <iostream>
#include <random>


int main() {
    // input the radius and height
    // variables
    int randomList[10];
    int randomNumber;
    float sum;
    float average;

    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        // random number
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(1, 100);
        randomNumber = idist(rgen);

        randomList[loop_counter] = randomNumber;

        std::cout << randomNumber << std::endl;
    }

    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        sum = sum + randomList[loop_counter];
    }

    average = sum / 10;

    std::cout << "" << std::endl;
    std::cout << "The average of these numbers is: " << average
              << std::endl;
}
