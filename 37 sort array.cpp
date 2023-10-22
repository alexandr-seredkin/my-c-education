#include <iostream>

using namespace std;

void sort_array(int numbers[], int sizeArr);

int main()
{
    int numbers[] = {5, 8, 10, 4, 1, 6, 9, 2, 7, 3};

    for (int number : numbers)
    {
        cout << number << "  ";
    }
    
    cout << "\n";
    cout << "\n";

    sort_array(numbers, size(numbers));
    
    for (int number : numbers)
    {
        cout << number << "  ";
    }

    cout << "\n";
    cout << "\n";

    return 0;
}

void sort_array(int numbers[], int sizeArr)
{
    int temp;

    for (int i = 0; i < sizeArr; i++)
    {
        for (int j = 0; j < sizeArr; j++)
        {
            if (numbers[i] < numbers[j])
            {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
}