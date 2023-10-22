#include <iostream>


int main()
{
    using std::cout;

    int students = 20;
    
    // plus
    students = students + 1;    // 21
    students += 1;              // 22
    students += 2;              // 24
    students ++;                // 25

    // minus
    students = students - 1;    // 24
    students -= 1;              // 23
    students -= 2;              // 21
    students --;                // 20

    // multiply
    students = students * 2;    //40
    students *= 2;              // 80    
    
    // divide
    students = students / 2;    //40
    students /= 2;              // 20


    int reminder = students % 3;


    cout << reminder << "\n";

    return 0;
}
