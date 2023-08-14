class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp;
        for (int i = 0; i < s.length(); i++) {
            bool found = false;
            for (auto &m : mp) {
                if (m.second == t[i]) {
                    found = true;
                    break;
                }
            }

            if (found)
                continue;

            if (mp.find(s[i]) == mp.end()) {
                mp[s[i]] = t[i];
            }
        }

        string iso;
        for (int i = 0; i < s.length(); i++) {
            for (auto &m : mp) {
                if (m.first == s[i]) {
                    iso += m.second;
                    break;
                }
            }
        }

        return t == iso;
    }
};
