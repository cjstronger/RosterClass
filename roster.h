#include "student.h"

class Roster{
    public:
        int count = 0;
        void add(Student student){
            classRosterArray[count] = student;
            count++;
        }
        void remove(string studentID);
        void printAll(){
            for(int i = 0; i < count; i++){
                cout << classRosterArray[i] << endl;
            }
        }
        Student getStudent(string studentID);
        void printAverageDaysInCourse(string studentID);
        void printInvalidEmails();
        void printByDegreeProgram(DegreeProgram degree);
        Roster::~Roster();
    private:
        Student classRosterArray[10];
};