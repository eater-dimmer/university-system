// Registration.h
#ifndef REGISTRATION_H
#define REGISTRATION_H

#include "Student.h"
#include "Course.h"

class Registration {
public:
    Registration(int registrationId, const Student& student, const Course& course);

    int getRegistrationId() const;
    const Student& getStudent() const;
    const Course& getCourse() const;

    void displayRegistrationInfo() const;

private:
    int registrationId;
    Student student;
    Course course;
};

#endif // REGISTRATION_H
