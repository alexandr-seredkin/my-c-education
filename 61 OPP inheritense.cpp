#include <iostream>

using namespace std;

class Animal
{
    public:
        bool alive = true;

    void eat()
    {
        cout << "Pet is eating" << endl;
    }
};

class Dog : public Animal
{

public:
    void bark()
    {
        cout << "The dog goes woof!" << endl;
    }
};

class Cat : public Animal
{

public:
    void meow()
    {

        cout << "The cat goes meow!" << endl;
    }
};

int main()
{

    Dog dog;
    Cat cat;
    cout << dog.alive << '\n';
    dog.eat();
    dog.bark();
    return 0;
}