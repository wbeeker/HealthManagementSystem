// Intake form for new patient coming into the emergency room.

#include "IntakeForm.h"
#include <iostream>
#include <limits>

// Collects patient information, returns a pointer to a patient object. 
std::shared_ptr<Patient> IntakeForm::collect() {
    std::string name;
    int age;
    int priority;
    std::string reason;

    std::cout << "\n---- Patient Intake Form ----" <<std::endl;
    std::cout << "Name: ";
    std::getline(std::cin, name);

    std::cout << "Age: ";
    std::cin >> age;    
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Priority Level on a scale of 1 to 10 (10 is severe, 1 is mild): ";
    std::cin >> priority;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Reason for visit: ";
    std::getline(std::cin, reason);

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        return std::make_shared<Patient>(name, age, priority, reason);
}
