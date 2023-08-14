class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        string formed;
        string words;
        unordered_map<char, string> mp;
        int i = 0;
        while (ss >> words) {
            bool found = false;
            for (auto &m : mp) {
                if (m.second == words) {
                    found = true;
                    break;
                }
            }

            if (found) {
                i++;
                continue;
            }

            if (mp.find(pattern[i]) == mp.end()) {
                mp[pattern[i]] = words;
            }

            i++;
        }

        for (int i = 0; i < pattern.length(); i++) {
            if (formed.length() > 0)
                formed += " ";

            formed += mp[pattern[i]];
        }

        return formed == s;
    }
};
