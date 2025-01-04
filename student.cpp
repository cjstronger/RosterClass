#include <iostream>
#include <string>
#include "student.h"

using namespace std;

string Student::getStudentName() const{
    return this->firstName + " " + this->lastName;
}

string Student::getStudentEmail() const{
    return this->emailAddress;
}

string Student::getStudentDegree() const{
    string listOfDegrees[3] = {"Security", "Network", "Software"};
    return listOfDegrees[this->degreeProgram];
}

DegreeProgram Student::getDegree() const{
    return this->degreeProgram;
}

string Student::getStudentDaysToCourseCompletion() const{
    string days = "{" + to_string(this->daysInCourse1) + " " + to_string(this->daysInCourse2) + " " + to_string(this->daysInCourse3) + "}";
    return days;
}

int* Student::getDays() const{
    static int days[3];
    days[0] = daysInCourse1;
    days[1] = daysInCourse2;
    days[2] = daysInCourse3;
    return days;
}

string Student::getStudentID() const{
    return this->studentID;
}

int Student::getStudentAge() const{
    return this->age;
}

void Student::setStudentFirstName(string first){
    this->firstName = first;
}

void Student::setStudentLastName(string last){
    this->lastName = last;
}

void Student::setStudentEmail(string email){
    this->emailAddress = email;
}

void Student::setStudentDegree(DegreeProgram degree){
    this->degreeProgram = degree;
}

void Student::setStudentID(string id){
    this->studentID = id;
}

void Student::setStudentDaysToCourseCompletion(int days){
    this->daysInCourse1 = days;
}

void Student::print(){
    cout << "Full Name:" << this->firstName << " " << lastName << endl
    << "Age:" << this->age << endl
    << "Email:" << this->emailAddress << endl
    << "Degree Program:" << this->getStudentDegree() << endl;
}

ostream& operator<<(ostream& os, const Student& student) {
    os << student.getStudentID() << "\t"
       << "Full Name:"
       << student.getStudentName() << "\t"
       << "Age:"
       << student.getStudentAge() << "\t"
       << "Days in Course:"
       << student.getStudentDaysToCourseCompletion() << "\t"
       << "Degree Program:"
       << student.getStudentDegree() << "\t";
    return os;
}

Student::Student(){}

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
    this->studentID = studentID;
    this->age = age;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->degreeProgram = degreeProgram;
    this->daysInCourse1 = daysInCourse1;
    this->daysInCourse2 = daysInCourse2;
    this->daysInCourse3 = daysInCourse3;
}
