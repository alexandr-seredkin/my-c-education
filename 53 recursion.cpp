#include <iostream>

using namespace std;

void walkIterable(int steps);
void walkRecursion(int steps);

int main()
{
    // Iterable
    walkIterable(12);
    
    // Recusion - need more memory and time
    walkRecursion(12);
    
    return 0;
}

void walkIterable(int steps)
{
    for (int i = 0; i < steps; i++)
    {
        cout << i + 1 << " - U take a step!" << endl;
    }
}

void walkRecursion(int steps)
{
    if (steps > 0)
    {
        cout << steps << " - U take a step!" << endl;
        walkRecursion(steps - 1);
    }
}