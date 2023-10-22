#include <iostream>

using namespace std;

int main()
{
   int grade;

   cout << "Enter your score from school test \n";
   cin >> grade;

   grade >= 50 ? 
      cout << "You are cool!" : 
      cout << "You pass!";

   cout << "\n";

   return 0;
}
