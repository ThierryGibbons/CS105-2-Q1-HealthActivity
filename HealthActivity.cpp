#include "HealthActivity.h"

HealthActivity::HealthActivity(const std::string& name, int steps, double distance)
    : name_(name), steps_(steps), distance_(distance) {}

void HealthActivity::SetName(const std::string& name) {
    name_ = name;
}

std::string HealthActivity::GetName() const {
    return name_;
}

void HealthActivity::SetSteps(int steps) {
    steps_ = steps;
}

int HealthActivity::GetSteps() const {
    return steps_;
}

void HealthActivity::SetDistance(double distance) {
    distance_ = distance;
}

double HealthActivity::GetDistance() const {
    return distance_;
}
