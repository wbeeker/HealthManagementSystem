#ifndef INTAKEFORM_H
#define INTAKEFORM_H

#include <memory>
#include "Patient.h"

class IntakeForm {
public:
    std::shared_ptr<Patient> collect();
};

#endif