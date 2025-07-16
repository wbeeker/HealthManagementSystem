#include "DischargeForm.h"
#include <iostream>
#include <fstream>
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

    std::ofstream outputFile("dischargeform_" + record.patient->getName() + ".txt");

    if (outputFile.is_open()) {
        outputFile << "\n📋 ======= DISCHARGE SUMMARY =======\n";
        outputFile << "Patient Name: " << record.patient->getName() << "\n";
        outputFile << "Age: " << record.patient->getAge() << "\n";
        outputFile << "Reason for visit: " << record.patient->getReason() << "\n";
        outputFile << "Priority Level: " << record.patient->getPriority() << "\n";

        outputFile << "Arrival Time:   " << std::put_time(std::localtime(&record.arrivalTime), "%Y-%m-%d %H:%M:%S") << "\n";
        outputFile << "Discharge Time: " << std::put_time(std::localtime(&dischargeTime), "%Y-%m-%d %H:%M:%S") << "\n";

        outputFile << "\nDischarge Instructions:\n" << instructions << "\n";

        outputFile.close();
        std::cout << "File written out successfully.\n" << std::endl;
    }



}

