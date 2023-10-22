#include <iostream>

using namespace std;

int main()
{
    string foods[5];
    string temp;

    for (int i = 0; i < size(foods); i++)
    {
        cout << "Enter food what u like or 'q' to quit #" << i + 1 << ": ";
        getline(cin, temp);
        if (temp == "q") {
            break;
        }
        else {
            foods[i] = temp;
        }
    }

    for (int i = 0; i < size(foods) && !foods[i].empty(); i++)
    {
        cout << foods[i] << "\n";
    }

    return 0;
}