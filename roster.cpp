#include <iostream>
#include <regex>
#include "roster.h"
using namespace std;

void Roster::remove(string studentID){
    bool found = false;
    for(int i = 0; i < count; i++){
        if(classRosterArray[i].getStudentID() == studentID){
            for(int j = i; j < count -1; j++){
                classRosterArray[j] = classRosterArray[j+1];
            }
            count--;
            found = true;
            break;
        }
    }
    if(!found){cout << "Student not found!" << endl;}
}

Student Roster::getStudent(string studentID){
    for(int i = 0; i < count; i++){
        if(classRosterArray[i].getStudentID() == studentID){
            return classRosterArray[i];
        }
    }
    cout << "No Student with that ID!" << endl;
    return Student();
}

void Roster::printAverageDaysInCourse(string studentID){
    Student student = getStudent(studentID);
    int* arr = student.getDays();

    int sum = 0;
    for(int i = 0; i < 3; i++){
        sum += arr[i];
    }
    double avg = sum / 3.0;
    cout << avg << endl;
}

void Roster::printInvalidEmails(){
    for (int i = 0; i < count; i++) {
        string email = classRosterArray[i].getStudentEmail();
        
        if (email.find('@') == string::npos ||
            email.find('.') == string::npos ||
            email.find(' ') != string::npos) {
            cout << email << " is invalid." << endl;
        }
    }
}

void Roster::printByDegreeProgram(DegreeProgram degree){
    for(int i = 0; i < count; i++){
        if(classRosterArray[i].getDegree() == degree){
            classRosterArray[i].print();
        }
    }
}

Roster::~Roster(){
    delete[] classRosterArray;
}