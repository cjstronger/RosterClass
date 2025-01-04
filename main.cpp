#include "roster.h"
#include <iostream>
#include <string>
using namespace std;

int main(){

 cout << "Course: Scripting and Programming - Applications" << endl
 << "Programming Language: C++" << endl
 << "WGU Student ID: 012496698" << endl
 << "Clint Strong" << endl << "\n";

 Roster classRoster;

 Student student1("A1", "John", "Smith", "John1989@gm ail.com", 20, 30, 35, 40, SECURITY);
 Student student2("A2", "Suzan", "Erickson", "Erickson_1990@gmailcom", 19, 50, 30, 40, NETWORK);
 Student student3("A3", "Jack", "Napoli", "The_lawyer99@yahoo.com", 19, 20, 40, 33, SOFTWARE);
 Student student4("A4", "Erin", "Black", "Erin.black@comcast.net", 22, 50, 58, 40, SECURITY);
 Student student5("A5", "Clint", "Strong", "clintjstrong@gmail.com", 26, 2, 1, 2, SOFTWARE);

 classRoster.add(student1);
 classRoster.add(student2);
 classRoster.add(student3);
 classRoster.add(student4);
 classRoster.add(student5);


 classRoster.printAll();

 cout << "\n";

 classRoster.printInvalidEmails();

 cout << "\n";

 for(int i = 1; i < classRoster.count+1; i++){
    string id = "A" + to_string(i);
    classRoster.printAverageDaysInCourse(id);
 }

 cout << "\n";

 classRoster.printAverageDaysInCourse("A4");

 cout << "\n";

 classRoster.printByDegreeProgram(SOFTWARE);

 cout << "\n";

 classRoster.remove("A3");

 cout << "\n";

 classRoster.printAll();

 cout << "\n";

 classRoster.remove("A3");

 return 0;
}