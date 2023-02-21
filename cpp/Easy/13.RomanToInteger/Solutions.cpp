//
// LINK: https://leetcode.com/problems/roman-to-integer/
//
class Solution {
public:
    int romanToInt(string s) {
        int total = 0;
        unordered_map<char, int> map;
        map['I'] = 1;
        map['V'] = 5;
        map['X'] = 10;
        map['L'] = 50;
        map['C'] = 100;
        map['D'] = 500;
        map['M'] = 1000;

        for(int i = 0; i < s.length(); i++)
        {
            if (map[s[i]] < map[s[i+1]])
            {
                total -= map[s[i]];
            }
            else
            {
                total += map[s[i]];
            }
        }
        return total;
    }
};
