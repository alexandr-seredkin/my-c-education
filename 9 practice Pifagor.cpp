#include <iostream>
#include <cmath>

int main()

{
   double a;
   double b;
   double c;

   using std::cin;
   using std::cout;

   cout << "Enter side A:" << "\n";
   cin >> a;

   cout << "Enter side B:" << "\n";
   cin >> b;

   c = sqrt(pow(a, 2) + pow(b, 2));

   cout << "Result is " << c << "\n";

   return 0;
}