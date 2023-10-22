#include <iostream>

using namespace std;

int main() {
   int number;

   do {
      cout << "Enter a positive number \n";
      cin >> number;
   } while (number < 0);

   cout << "Your positive number is " << number << "\n";

   return 0;
}