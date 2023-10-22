#include <iostream>

using namespace std;

int main()
{
   int number = 0;

   for (; number <= 3;)
   {
      number++;
      cout << "Number of interation: " << number << "\n";
   }



   for (int i = 1; i <= 3; i++)
   {
      cout << "Number of interation: " << i << "\n";
   }

   return 0;
}