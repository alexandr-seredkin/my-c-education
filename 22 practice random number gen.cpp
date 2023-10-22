#include <iostream>

using namespace std;

int main()
{
   srand(time(NULL));

   cout << (rand() % 6) + 1 << '\n';
   cout << (rand() % 6) + 1 << '\n';
   cout << (rand() % 6) + 1 << '\n';

   return 0;
}