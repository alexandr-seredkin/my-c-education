#include <iostream>

using namespace std;

int main()
{
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    for (char grade : grades)
    {
        cout << grade << '\n';
    }
    return 0;
}