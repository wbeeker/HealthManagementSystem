// Patient class. Creates a patient object.

#include "Patient.h"

Patient::Patient(const std::string& name, int age, int priority, const std::string& reason)
    : name(name), age(age), priorityLevel(priority), reason(reason) {}

std::string Patient::getName() const {
    return name;
}

int Patient::getAge() const {
    return age;
}

int Patient::getPriority() const {
    return priorityLevel;
}

std::string Patient::getReason() const {
    return reason;
}

void Patient::displayInfo() const {
    std::cout << "Patient: " << name
              << ", Age: " << age
              << ", Priority: " << priorityLevel << std::endl;
}

