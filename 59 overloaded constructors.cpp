#include <iostream>

using namespace std;

class Pizza
{

public:
    string topping1;
    string topping2;
    Pizza()
    {
    }
    Pizza(string topping1)
    {
        this->topping1 = topping1;
    }

    Pizza(string topping1, string topping2)
    {
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

int main()
{
    Pizza pizza1("pepperoni");
    Pizza pizza2("mushrooms", "peppers");
    Pizza pizza3;

    return 0;
}