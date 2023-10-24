#include <iostream>

using namespace std;

class Solution
{
public:
    int romanToInt(string s);
};

int Solution::romanToInt(string s)
{
    int result = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'I' && s[i + 1] == 'V')
        {
            result += 4;
            i++;
            continue;
        }

        if (s[i] == 'I' && s[i + 1] == 'X')
        {
            result += 9;
            i++;
            continue;
        }

        if (s[i] == 'X' && s[i + 1] == 'L')
        {
            result += 40;
            i++;
            continue;
        }
        if (s[i] == 'X' && s[i + 1] == 'C')
        {
            result += 90;
            i++;
            continue;
        }

        if (s[i] == 'C' && s[i + 1] == 'D')
        {
            result += 400;
            i++;
            continue;
        }
        if (s[i] == 'C' && s[i + 1] == 'M')
        {
            result += 900;
            i++;
            continue;
        }
        switch (s[i])
        {
        case 'X':
            result += 10;
            break;
        case 'I':
            result += 1;
            break;
        case 'V':
            result += 5;
            break;
        case 'L':
            result += 50;
            break;
        case 'C':
            result += 100;
            break;
        case 'D':
            result += 500;
            break;
        case 'M':
            result += 1000;
            break;
        default:
            break;
        }
    }

    cout << s << endl;
    return result;
}

int main()
{
    Solution leetcode;
    cout << leetcode.romanToInt("MCMXCIV") << endl;
    return 0;
}
