#include "PatientRecord.h"

PatientRecord::PatientRecord(int priority, std::time_t arrival, std::shared_ptr<IPatient> p)
    : priorityLevel(priority), arrivalTime(arrival), patient() {}

bool PatientComparator::operator()(const PatientRecord& lhs, const PatientRecord& rhs) const {
    if (lhs.priorityLevel != rhs.priorityLevel) {
        return lhs.priorityLevel > rhs.priorityLevel;
    }
    return lhs.arrivalTime > rhs.arrivalTime;
}