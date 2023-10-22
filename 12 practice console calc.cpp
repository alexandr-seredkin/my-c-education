#include <iostream>

using namespace std;

void consoleWrite(double text)
{
   cout << "Result is " << text << "\n";
}

int main()
{
   char operation;
   double num1;
   double num2;
   double result;

   cout << "=========== CALCULATOR =========== \n";
   cout << "Enter either (+ - / *): \n";
   cin >> operation;

   cout << "Enter #1 number \n";
   cin >> num1;

   cout << "Enter #2 number \n";
   cin >> num2;

   switch (operation)
   {
   case '+':
      consoleWrite(num1 + num2); 
      break;
   case '-':
      consoleWrite(num1 - num2); 
      break;
   case '/':
      consoleWrite(num1 / num2); 
      break;
   case '*':
      consoleWrite(num1 * num2); 
      break;
   default:
      cout << "Unknown operation "
           << "\n";
      break;
   }
   cout << "================================= \n";

   return 0;
}
