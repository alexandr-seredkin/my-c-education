#include <iostream>

using namespace std;


void consoleWrite(auto text)
{
   cout << "Result is " << text << "\n";
}

int main()
{
   string name;

   cout << "Enter your name";
   getline(cin, name);

   // length string
   consoleWrite(name.length());
   
   // string is empty boolean
   consoleWrite(name.empty());

   // username@gmail.com | append is concat of strings
   consoleWrite(name.append("@gmail.com"));

   // find index of sybmol in string or return false
   consoleWrite(name.find("a"));

   // erase by index'es
   consoleWrite(name.erase(0 , 5));

   return 0;
}