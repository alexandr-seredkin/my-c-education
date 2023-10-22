#include <iostream>

using namespace std;

int main()
{
    cout << sizeof((bool)true)      << " bytes \n";        // Состояние
    cout << sizeof((char)'a')       << " bytes \n";        // Символ
    cout << sizeof((string) "a")    << " bytes \n";        // Строка
    cout << sizeof((int) 1)         << " bytes \n";        // Целое число
    cout << sizeof((int) 100)       << " bytes \n";        // Целое число
    cout << sizeof((double) 1.00)   << " bytes \n";        // Число с плавающей точкой
    cout << sizeof((double) 100.00) << " bytes \n";        // Число с плавающей точкой
    return 0;
}