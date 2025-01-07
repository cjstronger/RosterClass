#include <iostream>
#include <string>
#include "degree.h"
using namespace std;

class Student {
    public:
        Student();
        Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);        
        string getStudentName() const;
        string getStudentEmail() const;
        string getStudentDegree() const;
        int getStudentAge() const;
        string getStudentDaysToCourseCompletion() const;
        int* getDays() const;
        string getStudentID() const;
        DegreeProgram getDegree() const;
        void setStudentFirstName(string first);
        void setStudentLastName(string last);
        void setStudentEmail(string email);
        void setStudentDegree(DegreeProgram degree);
        void setStudentID(string id);
        void setStudentDaysToCourseCompletion(int days);
        void print();
        friend ostream& operator<<(ostream& os, const Student& student);
    private:
        int age;
        string studentID;
        string lastName;
        string firstName;
        string emailAddress;
        DegreeProgram degreeProgram;
        int daysInCourse1; 
        int daysInCourse2;
        int daysInCourse3;
};

ostream& operator<<(ostream& os, const Student& student);