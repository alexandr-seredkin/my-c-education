#include <iostream>


namespace first{
    int x = 1;
}

// Пространство имён
namespace second{
    int x = 2;
}


int main()
{
    // двое точие :: это разрешение
    // пространству имён к приминению
    // своей области видимости

    // int x = 0;
    // std:: cout << x; // 0
    // std:: cout << first::x; // 1
    // std:: cout << second::x; // 2


    using namespace second;
    std:: cout << x; // 2
    std:: cout << first::x; // 1


    using namespace std;
    // часто используют стандартное пространство std
    // чтобы сэкономить время, но это может вызвать 
    // конфликт имён если имена из std будут использованы позже

    string name = "Alexnadr";
    cout << name;
    // при задавании строк с (using namespace std;)
    // можно не писать std::

    // чтобы не использовать случайно имя из пространства std
    // правильнее будет "вытаскивать" что-то конкретное, например:
    using std::string;
    using std::cout;

    // И это так же будет работать, даже если стереть (using namespace std;) выше
    string name = "Alexnadr";
    cout << name;
    

    return 0;
}
