#include "IntakeForm.h"
#include <iostream>
#include <limits>

std::shared_ptr<Patient> IntakeForm::collect() {
    std::string name;
    int age;
    int priority;
    std::string reason;

    std::cout << "\n---- Patient Intake Form ----" <<std::endl;
    std::cout << "Name: ";
    std::cin >> name;

    std::cout << "Age: ";
    std::cin >> age;

    std::cout << "Priority Level on a scale of 1 to 10: ";
    std::cin >> priority;

    std::cout << "Reason for visit: ";
    std::cin >> reason;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        return std::make_shared<Patient>(name, age, priority, reason);
}
