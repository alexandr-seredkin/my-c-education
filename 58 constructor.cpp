#include <iostream>

using namespace std;

class Student
{
public:
    string name;
    int age;
    double gpa;

    Student(string name, int age, double gpa)
    {
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

int main()
{
    Student Me("Alexandr", 21, 5.0);

    cout << "Student name is: " << Me.name << endl;
    cout << "Student age is: " << Me.age << endl;
    cout << "Student gpa is: " << Me.gpa << endl;

    return 0;
}