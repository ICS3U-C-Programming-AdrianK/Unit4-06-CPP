// Copyright (c) 2025 All rights reserved.
//
// Created by: Adrian student
// Created on: 20th NOV 2026
// This program uses nested loops to print
// out all the valid RGB colour.
#include<iostream>

int main() {
    // define constants
    int red;
    int green;
    int blue;

    // set red loop
    for (red = 0; red <= 0; red++) {
        // set green loop
        for (green = 0; green <= 1; green++) {
            // set blue loop
            for (blue = 0; blue <= 255; blue++) {
                // display colours
                std::cout << "\033[1;38;2;"
                    << red << ";" << green << ";" << blue
                    << "mRGB(" << red << ", "
                    << green << ", " << blue << ")\033[0m";
                std::cout << "\n";
            }
        }
    }
}
