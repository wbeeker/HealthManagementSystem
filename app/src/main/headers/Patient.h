#ifndef PATIENT_H
#define PATIENT_H

#include "IPatient.h"
#include <string>
#include <iostream>

class Patient : public IPatient {
private:
    std::string name;
    int age;
    int priorityLevel;
    std::string reason;

public:
    Patient(const std::string& name, int age, int priorityLevel, const std::string& reason);

    std::string getName() const override;
    int getAge() const override;
    int getPriority() const override;
    std::string getReason() const override;
    void displayInfo() const override;
};

#endif