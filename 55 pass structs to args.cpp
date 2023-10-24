#include <iostream>

using namespace std;

struct Car
{
    string model;
    string color;
    int year;
};

void printCat(Car car);
void paintCar(Car &car, string color);

int main()
{
    Car car1;
    Car car2;

    car1.model = "Tesla X";
    car1.color = "White";
    car1.year = 2021;

    car2.model = "Mustang";
    car2.color = "Red";
    car2.year = 2025;

    // By value - not by link
    // have different address (is copy)
    printCat(car1);

    // By link - have one address
    paintCar(car1, "Purple");

    printCat(car1);

    return 0;
}

void printCat(const Car car)
{
    cout << "          " << car.model << endl;
    cout << "          " << car.color << endl;
    cout << "          " << car.year << endl;
    cout << "\033[32m"
         << "________________________"
         << "\033[0m" << endl;
}

void paintCar(Car &car, string color)
{
    car.color = color;
}