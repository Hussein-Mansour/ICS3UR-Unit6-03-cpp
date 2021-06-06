// Copyright (c) 2021 Hussein Mansour All rights reserved
//
// Created by: Hussein Mansour
// Created on: Wed/Jun2/2021
// this program generates 10 random numbers between 1 and 100
// display the smallest number


#include <iostream>
#include <random>


int smallestRnumber(int *randomNumber) {
    int min = randomNumber[0];

    for (int counter = 1; counter < 10; counter++) {
        if (randomNumber[counter] < min) {
            min = randomNumber[counter];
        }
    }

    std::cout << min << std::endl;

    return 0;
}


int main() {
    // this function uses an array
    int randomNumber[10];
    int number;
    // start
    std::cout << "Starting ...\n" << std::endl;
    std::cout << "Here is a list of random numbers:\n" << std::endl;

    // input
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());  // mersenne_twister
        std::uniform_int_distribution<int> idist(0 , 100);  // [0,9]
        number = idist(rgen);

        randomNumber[loop_counter] = number;
        // output
        std::cout << "The random number "<< loop_counter + 1 << " is: "
        << randomNumber[loop_counter] << std::endl;
    }
    // output
    std::cout << "\nThe smallest number is " <<  smallestRnumber(randomNumber) << std::endl;

std::cout << "\n\nDone." << std::endl;
}
