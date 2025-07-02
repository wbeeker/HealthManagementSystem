#ifndef PATIENTRECORD_H
#define PATIENTRECORD_H

#include <memory>
#include <ctime>
#include "IPatient.h"

struct PatientRecord {
    int priorityLevel;
    std::time_t arrivalTime;
    std::shared_ptr<IPatient> patient;

    PatientRecord(int priority, std::time_t arrival, std::shared_ptr<IPatient> p);
};

struct PatientComparator{
    bool operator()(const PatientRecord& lhs, const PatientRecord& rhs) const;
};

#endif