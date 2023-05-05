#include <iostream>
#include "HealthActivity.h"

int main() {
    const int NUM_USERS = 5;
    HealthActivity* healthActivities = new HealthActivity[NUM_USERS];

    // Take input from 5 users
    // ...

    // Set and get data using SetFunction() and GetFunction()
    // ...

    // Calculate and display the average steps and distance
    // ...

    delete[] healthActivities;

    return 0;
}
