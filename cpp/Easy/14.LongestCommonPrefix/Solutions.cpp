//
// LINK: https://leetcode.com/problems/longest-common-prefix/
//
class Solution {
public:
    string getCommon(string str1, string str2) {
        string common;
        for(int i = 0; i < str1.size(); i++)
        {
            if (i >= str2.size())
                break;

            if (str1[i] != str2[i])
                break;
            
            common += str1[i];
        }
        return common;
    }

    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0)
            return "";

        string common = strs[0];
        for(int i = 1; i < strs.size(); i++)
        {
            common = getCommon(common, strs[i]);
        }
        return common;
    }
};
