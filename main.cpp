#include <iostream>
#include "HealthActivity.h"

void SetFunction(HealthActivity* activity, const std::string& name, int steps, double distance) {
    activity->SetName(name);
    activity->SetSteps(steps);
    activity->SetDistance(distance);
}

void GetFunction(const HealthActivity* activity) {
    std::cout << "Name: " << activity->GetName()
              << ", Steps: " << activity->GetSteps()
              << ", Distance: " << activity->GetDistance() << " km" << std::endl;
}

void GetAverageFunction(double avgSteps, double avgDistance) {
    std::cout << "Average Steps: " << avgSteps
              << ", Average Distance: " << avgDistance << " km" << std::endl;
}

int main() {
    const int NUM_USERS = 5;
    HealthActivity* healthActivities = new HealthActivity[NUM_USERS];

    // Take input from 5 users
    for (int i = 0; i < NUM_USERS; i++) {
        std::string name;
        int steps;
        double distance;

        std::cout << "Enter the name for user " << (i + 1) << ": ";
        std::cin >> name;
        std::cout << "Enter the steps for user " << (i + 1) << ": ";
        std::cin >> steps;
        std::cout << "Enter the distance (in km) for user " << (i + 1) << ": ";
        std::cin >> distance;

        SetFunction(&healthActivities[i], name, steps, distance);
    }

    std::cout << "\nUser Data:\n";
    // Display data using GetFunction()
    for (int i = 0; i < NUM_USERS; i++) {
        GetFunction(&healthActivities[i]);
    }

    // Calculate and display the average steps and distance
    double totalSteps = 0;
    double totalDistance = 0;

    for (int i = 0; i < NUM_USERS; i++) {
        totalSteps += healthActivities[i].GetSteps();
        totalDistance += healthActivities[i].GetDistance();
    }

    double avgSteps = totalSteps / NUM_USERS;
    double avgDistance = totalDistance / NUM_USERS;

    std::cout << "\nAverages:\n";
    GetAverageFunction(avgSteps, avgDistance);

    delete[] healthActivities;

    return 0;
}
