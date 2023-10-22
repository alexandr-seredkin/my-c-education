#include <iostream>

using namespace std;

int main()
{
   for (int i = 1; i <= 20; i++) {
      if (i == 13) continue;
      cout << "Number of interation: " << i << "\n";
   }

   return 0;
}