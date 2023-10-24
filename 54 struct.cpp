#include <iostream>

using namespace std;

struct student
{
    string name;
    double gpa;
    bool enrolled = true;
};

int main()
{
    student Me;
    Me.name = "Alexandr";
    Me.gpa = 5.0;
    Me.enrolled = false;

    return 0;
}