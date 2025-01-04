#include <iostream>
#include <string>
#include "student.h"

using namespace std;

string Student::getStudentName(){
    return this->firstName + this->lastName;
}

string Student::getStudentEmail(){
    return this->emailAddress;
}

string Student::getStudentDegree(){
    string listOfDegrees[3] = {"Security", "Network", "Software"};
    return listOfDegrees[this->degreeProgram];
}

int* Student::getStudentDaysToCourseCompletion(){
    return daysToCourseCompletion;
}

string Student::getStudentID(){
    return this->studentID;
}

int Student::getStudentAge(){
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

void Student::setStudentDaysToCourseCompletion(int arr[]){
    for(int i = 0; i < 3; i++) {
        this->daysToCourseCompletion[i] = arr[i];
    }
}

void Student::print(){
    cout << "Full Name:" << this->firstName << " " << lastName << endl << "Age:" << this->age << endl << "Email:" << this->emailAddress << endl << "Degree Program:" << this->getStudentDegree() << endl;
}

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, DegreeProgram degreeProgram, int daysArray[]) {
    this->studentID = studentID;
    this->age = age;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->degreeProgram = degreeProgram;
    for (int i = 0; i < 3; i++) {
        this->daysToCourseCompletion[i] = daysArray[i];
    }
}
