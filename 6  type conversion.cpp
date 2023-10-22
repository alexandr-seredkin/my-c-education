#include <iostream>

int main()
{
    using std::cout;

    // в х сохраяется приобразованый в int 3.14159
    double x = (int) 3.14159;
    cout << x << "\n"; // 3

    // Неявное приведение типов число 100 в таблице
    // ASCII это буква d
    char someChar = 100;
    cout << someChar << "\n";

    cout << (char) 100; // it's d too
    cout << "\n";

    int correct = 8;
    int questions = 10;

    double score1 = correct / questions * 100;
    // результат 0% потому что при correct / questions мы усекаем
    // десятичную часть так как оба числа int
    cout << score1 << '%' << "\n"; // 0%

    double score2 = correct / double(questions) * 100;
    // теперь явным приведением типов мы получаем верный результат
    cout << score2 << '%' << "\n"; // 80%

    return 0;
}
