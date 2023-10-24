#include <iostream>

using namespace std;

class Solution
{
public:
    bool isPalindrome(int x);
};

bool Solution::isPalindrome(int x)
{
    bool result = true;
    string str = to_string(x);

    for (int i = 0; i < str.length(); i++)
    {
        // Если i прошел половину массива строки, то заканчиваем
        // итерация и возращаем result
        if (i >= (str.length() / 2))
            return result;

        // Если символ с начала не совпадает с символом в конце
        if (str[i] != str[str.length() - 1 - i])
        {
            // то это не палиндром
            result = false;
        }
    }
    return result;
}

int main()
{
    Solution leetcode;
    cout << leetcode.isPalindrome(23132) << endl;
    return 0;
}
