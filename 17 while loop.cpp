#include <iostream>

using namespace std;

int main()
{
   string name;

   while (name.empty())
   {
      cout << "Enter your name \n";
      getline(cin, name);
   }

   cout << "Hello " << name << "\n";

   return 0;
}