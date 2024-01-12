// University.cpp
#include <iostream>
#include "Student.h"
#include "Course.h"
#include "Registration.h"

Student::Student(int studentId, const std::string& name) : studentId(studentId), name(name) {}

int Student::getStudentId() const {
    return studentId;
}

const std::string& Student::getName() const {
    return name;
}

void Student::displayStudentInfo() const {
    std::cout << "Student ID: " << studentId << ", Name: " << name << std::endl;
}

Course::Course(int courseId, const std::string& title) : courseId(courseId), title(title) {}

int Course::getCourseId() const {
    return courseId;
}

const std::string& Course::getTitle() const {
    return title;
}

void Course::displayCourseInfo() const {
    std::cout << "Course ID: " << courseId << ", Title: " << title << std::endl;
}

Registration::Registration(int registrationId, const Student& student, const Course& course)
    : registrationId(registrationId), student(student), course(course) {}

int Registration::getRegistrationId() const {
    return registrationId;
}

const Student& Registration::getStudent() const {
    return student;
}

const Course& Registration::getCourse() const {
    return course;
}

void Registration::displayRegistrationInfo() const {
    std::cout << "Registration ID: " << registrationId << std::endl;
    student.displayStudentInfo();
    course.displayCourseInfo();
    std::cout << std::endl;
}

int main() {
    Student student1(1, "John Doe");
    Student student2(2, "Jane Doe");

    Course course1(101, "Introduction to Programming");
    Course course2(102, "Data Structures");

    Registration registration1(501, student1, course1);
    Registration registration2(502, student2, course2);

    std::cout << "Student Information:" << std::endl;
    student1.displayStudentInfo();
    student2.displayStudentInfo();
    std::cout << std::endl;

    std::cout << "Course Information:" << std::endl;
    course1.displayCourseInfo();
    course2.displayCourseInfo();
    std::cout << std::endl;

    std::cout << "Registration Information:" << std::endl;
    registration1.displayRegistrationInfo();
    registration2.displayRegistrationInfo();

    return 0;
}
