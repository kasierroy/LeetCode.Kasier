//
// LINK: https://leetcode.com/problems/palindrome-number/
//
class Solution {
public:
    bool isPalindrome(int x) {
        std::string value = std::to_string(x);
        int i = 0;
        int j = value.length()- 1;
        while (i <= j)
        {

            if (value[i] != value[j])
                return false;

            i++;
            j--;
        }
        return true;
    }
};
