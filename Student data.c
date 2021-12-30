Programiz

Search Programiz
Get App


C++ Program to Store Information of a Student in a Structure
This program stores the information (name, roll and marks entered by the user) of a student in a structure and displays it on the screen.

To understand this example, you should have the knowledge of the following C++ programming topics:

C++ Structures
C++ Strings
In this program, a structure(student) is created which contains name, roll and marks as its data member. Then, a structure variable(s) is created. Then, data (name, roll and marks) is taken from user and stored in data members of structure variable s. Finally, the data entered by user is displayed.

Example: Store and Display Information Using Structure
#include <iostream>
using namespace std;

struct student
{
    char name[50];
    int roll;
    float marks;
};

int main() 
{
    student s;
    cout << "Enter information," << endl;
    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter roll number: ";
    cin >> s.roll;
    cout << "Enter marks: ";
    cin >> s.marks;

    cout << "\nDisplaying Information," << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll: " << s.roll << endl;
    cout << "Marks: " << s.marks << endl;
    return 0;
}
