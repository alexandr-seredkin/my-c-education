#include <iostream>

using namespace std;

void consoleWrite(string text)
{
   cout << text << "\n";
}

int main()
{
   int mouth;
   cout << "Enter the month (1-12): ";
   cin >> mouth;

   switch (mouth)
   {
   case 1:
      consoleWrite("Январь");
      break;
   case 2:
      consoleWrite("Февраль");
      break;
   case 3:
      consoleWrite("Март");
      break;
   case 4:
      consoleWrite("Апрель");
      break;
   case 5:
      consoleWrite("Май");
      break;
   case 6:
      consoleWrite("Июнь");
      break;
   case 7:
      consoleWrite("Июль");
      break;
   case 8:
      consoleWrite("Август");
      break;
   case 9:
      consoleWrite("Сентябрь");
      break;
   case 10:
      consoleWrite("Октябрь");
      break;
   case 11:
      consoleWrite("Ноябрь");
      break;
   case 12:
      consoleWrite("Декабрь");
      break;
   default:
      consoleWrite("Номер месяца не должен выходить за пределы от 1 до 12");
      break;
   }

   return 0;
}
