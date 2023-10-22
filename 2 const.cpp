#include <iostream>

int main()
{
    // if we use const:
    // const (TYPE) (VARIABLE NAME IN UPPERCASE) = value
    const double PI = 3.14159;
    double radius = 12;
    double curcumference = 2 * PI * radius;

    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
    
    std::cout << curcumference << "sm";

    return 0;
}
