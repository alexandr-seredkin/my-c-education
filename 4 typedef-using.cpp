#include <iostream>
#include <vector>



// typedef std::string text_t;
// or
using text_t = std::string;


// typedef int number_t;
// or
using number_t = int;


// ========= in end add "_t" for types =========


int main()
{
    // typedef используется для создания псевдонимов других типов данных. 
    using std::cout;

    text_t firstName = "Alexandr";
    number_t age = 21;


    cout << firstName << "\n";
    cout << 21 << "\n";

    return 0;
}
