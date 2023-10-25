#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs);
};

string Solution::longestCommonPrefix(vector<string> &strs)
{
    string prefix = "";
    for (int i = 0; i < strs.size(); i++) {
        if (i == 0) {
            prefix = strs[i];
            continue;
        }
        for (int j = 0; j < strs[i].length() + 1; j++) {
            if (prefix[j] != strs[i][j]) {
                prefix = prefix.substr(0, j);
                break;
            }
        }
    }
    return prefix;
}

int main()
{
    Solution leetcode;
    vector<string> catPrahse = {"ab", "a"};
    cout << leetcode.longestCommonPrefix(catPrahse) << endl;
    return 0;
}
