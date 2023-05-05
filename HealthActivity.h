#ifndef HEALTHACTIVITY_H
#define HEALTHACTIVITY_H

#include <string>

class HealthActivity {
public:
    HealthActivity(const std::string& name, int steps, double distance);

    void SetName(const std::string& name);
    std::string GetName() const;

    void SetSteps(int steps);
    int GetSteps() const;

    void SetDistance(double distance);
    double GetDistance() const;

private:
    std::string name_;
    int steps_;
    double distance_;
};

#endif // HEALTHACTIVITY_H
