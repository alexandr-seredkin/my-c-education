#include <iostream>
#include <vector>

using namespace std;

int main()
{
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    for (int i = 0; i < size(grades); i++) {
        cout << grades[i] << '\n';
    }
    return 0;
}