#include <iostream>

int main()
{
    using std::cout;
    using std::string;

    string fullname;
    int age;

    cout << "What's your fullname?" << "\n";
    // std::ws - delete whitespaces
    std::getline(std::cin >> std::ws, fullname);
    cout << "Hello " << fullname << "!" << "\n";

    cout << "What's your age?" << "\n";
    // cin reading string before space!!!
    std::cin >> age;
    cout << "Your age is " << age << "!" << "\n";

    return 0;
}
