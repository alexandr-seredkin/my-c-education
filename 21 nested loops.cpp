#include <iostream>

using namespace std;

int main()
{

   int cols;
   int rows;
   char symbol;

   cout << "How many rows?";
   cin >> cols;
   cout << "How many col?";
   cin >> rows;
   cout << "What's the symbol?";
   cin >> symbol;

   for (int i = 1; i <= rows; i++)
   {
      for (int j = 1; j <= cols; j++)
      {
         cout << symbol;
      }
      cout << "\n";
   }

   return 0;
}