//
// LINK: https://leetcode.com/problems/length-of-last-word/
//
#include <cstring>
class Solution {
public:
    int lengthOfLastWord(string s) {
        int counter = 0;
        char *token = strtok((char*)s.c_str(), " ");
        while (token != NULL)
        {
            counter = strlen(token);
            token = strtok(NULL, " ");
        }

        return counter;
    }
};
