// Created by: Shem
// Created on: 10/4/2025
// This program demonstrates local and global variable usage
// Copyright 2025 Shem

#include <iostream>

// Global variable
int VARIABLE_x = 25;

void local_variable() {
    // Creates local variables
    int local_x = 15;
    int local_y = 17;

    local_x = local_x + 1;
    int local_z = local_x + local_y;

    std::cout << "Local variable: " << local_x << " + " << local_y
            << " = " << local_z << std::endl;
}

void global_variable() {
    // Uses the global variable
    int local_y = 17;

    VARIABLE_x = VARIABLE_x + 1;
    int local_z = VARIABLE_x + local_y;

    std::cout << "Global variable: " << VARIABLE_x << " + " << local_y
            << " = " << local_z << std::endl;
}

int main() {
    local_variable();
    global_variable();

    std::cout << "\nDone." << std::endl;
}
