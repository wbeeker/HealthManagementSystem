#ifndef IPATIENT_H
#define IPATIENT_H

#include <string>

class IPatient {
public:
    virtual ~IPatient() {}

    virtual std::string getName() const = 0;
    virtual int getAge() const = 0;
    virtual int getPriority() const = 0;
    virtual std::string getReason() const = 0;
    virtual void displayInfo() const = 0;
};

#endif