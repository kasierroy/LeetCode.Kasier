//
// LINK: https://leetcode.com/problems/longest-substring-without-repeating-characters/ 
//
class Solution {
public:
    struct Substring
    {
        std::string content;
        bool exist;
    };

    int lengthOfLongestSubstring(std::string s) {
        int highest = 0;
        std::vector <Substring> vect;

        for (int i = 0 ; i < s.size(); i++) {
            vect.push_back( {"", false});
            for (int x = 0; x < vect.size(); x++) {
                if (vect[x].exist)
                    continue;
                
                if (vect[x].content.find(s[i]) != std::string::npos) {
                    vect[x].exist = true;
                }
                else {
                    vect[x].content += s[i];
                }
            }
        }

        for (int x = 0; x < vect.size(); x++) {
            int len = vect[x].content.size();
            if (highest < len)
                highest = len;
        }

        return highest;
    }
};
