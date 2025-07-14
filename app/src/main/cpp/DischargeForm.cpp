#include "DischargeForm.h"
#include <iostream>
#include <iomanip>
#include <chrono>


void DischargeForm::dischargePatient(const PatientRecord& record) {
    std::string instructions;
    std::cout <<"\nEnter discharge instructions for " << record.patient->getName() << ":\n";
    std::getline(std::cin, instructions);

    std::time_t dischargeTime = std::time(nullptr);

    std::cout << "\n📋 ======= DISCHARGE SUMMARY =======\n";
    std::cout << "Patient Name: " << record.patient->getName() << "\n";
    std::cout << "Age: " << record.patient->getAge() << "\n";
    std::cout << "Reason for visit: " << record.patient->getReason() << "\n";
    std::cout << "Priority Level: " << record.patient->getPriority() << "\n";

    std::cout << "Arrival Time:   " << std::put_time(std::localtime(&record.arrivalTime), "%Y-%m-%d %H:%M:%S") << "\n";
    std::cout << "Discharge Time: " << std::put_time(std::localtime(&dischargeTime), "%Y-%m-%d %H:%M:%S") << "\n";

    std::cout << "\nDischarge Instructions:\n" << instructions << "\n";
    std::cout << "===================================\n\n";

}