#include <iostream>

using namespace std;

class Student
{
    private:
        int temperature = 0;

    public:
        string name;
        int age;

    // getter temp
    int getTemperature()
    {
        return this->temperature;
    }
    // setter temp
    int setTemperature(int temp)
    {
        if (temp > 60 && temp < 0)
        {
            cout << "Incorrect temp!";
        }
        else
        {
            this->temperature = temp;
        }
        return this->temperature;
    }

    Student(int temp, string name, int age)
    {
        this->age = age;
        setTemperature(temp);
        this->name = name;
    }
};

int main()
{
    Student student(36, "alexandr", 21);

    return 0;
}