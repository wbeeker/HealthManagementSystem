#ifndef PATIENTRECORD_H
#define PATIENTRECORD_H

#include <memory>
#include <ctime>
#include "IPatient.h"

struct PatientRecord {
    std::time_t arrivalTime;
    std::shared_ptr<IPatient> patient;

    PatientRecord(std::time_t arrival, std::shared_ptr<IPatient> p)
        : arrivalTime(arrival), patient(p) {}
};

struct PatientComparator{
    bool operator()(const PatientRecord& lhs, const PatientRecord& rhs) const {
        int lhspriority = lhs.patient->getPriority();
        int rhspriority = rhs.patient->getPriority();

        if (lhspriority != rhspriority) 
            return lhspriority > rhspriority;
        
        return lhs.arrivalTime > rhs.arrivalTime;
    }
};

#endif