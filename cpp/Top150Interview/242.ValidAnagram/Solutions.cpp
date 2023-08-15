class Solution {
public:
    bool isAnagram(string s, string t) {
        // The easier way without using hashtable.
        //sort (s.begin(), s.end());
        //sort (t.begin(), t.end());
        //return s == t;

        int s_len = s.length();
        int t_len = t.length();
        if (s_len != t_len)
            return false;

        unordered_map<char, int> mp;
        for (int i = 0; i < t_len; i++) {
            mp[t[i]]++;
        }

        for (int i = 0; i < s_len; i++) {
            if (mp.find(s[i]) == mp.end())
                return false;
            else if (mp[s[i]] <= 0)
                return false;
            else
                mp[s[i]]--;
        }

        return true;
    }
};
