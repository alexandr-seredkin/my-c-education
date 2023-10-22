#include <iostream>

using namespace std;

int main()
{
   double temp;
   char unit;

   cout << "Enter the type of temp (C or F): \n";
   cin >> unit;
   unit = toupper(unit);

   if(unit == 'C'){
      cout << "Enter the temp in Celsius: \n";
      cin >> temp;
      cout << "This temp is " << (1.8 * temp) + 32.0 << "\n";
   }
   if(unit == 'F'){
      cout << "Enter the temp in Pahrenheit: \n";
      cin >> temp;
      cout << "This temp is " << ((temp - 32.0)/ 1.8 )<< "\n";
   }
   if(unit != 'F' && unit != 'C'){
      cout << "This temp is can not be \n";
   }

   return 0;
}