#ifndef DISCHARGEFORM_H
#define DISCHARGFORM_H

#include <memory>
#include "Patient.h"
#include "PatientRecord.h"


class DischargeForm {
public:
    void dischargePatient(const PatientRecord& record);
};

#endif