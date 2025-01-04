#include <iostream>
#include <string>
#include "degree.h"
using namespace std;

class Student {
    public:
        Student(string studentID, string firstName, string lastName, string emailAddress, int age, DegreeProgram degreeProgram, int daysToCourseCompletion[]);        
        Student();
        string getStudentName();
        string getStudentEmail();
        string getStudentDegree();
        int getStudentAge();
        int* getStudentDaysToCourseCompletion();
        string getStudentID();
        void setStudentFirstName(string first);
        void setStudentLastName(string last);
        void setStudentEmail(string email);
        void setStudentDegree(DegreeProgram degree);
        void setStudentID(string id);
        void setStudentDaysToCourseCompletion(int arr[]);
        void print();
    private:
        int age;
        string studentID;
        string lastName;
        string firstName;
        string emailAddress;
        DegreeProgram degreeProgram;
        int daysToCourseCompletion[3];
};