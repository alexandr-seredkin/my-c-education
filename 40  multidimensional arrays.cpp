#include <iostream>

using namespace std;

int main()
{
    string cars[][3] = {{"Escape", "F-150", "Mustang"},
                        {"Corvette", "Silverado", "Equinox"},
                        {"Challanger", "Durango", "Ram 1500"}};

    int rows = size(cars);
    int columns = size(cars[0]);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << cars[i][j] << " ";
        }
        cout << '\n';
    }

    cout << '\n';

    return 0;
}
