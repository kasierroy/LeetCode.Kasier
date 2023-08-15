class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> group;
        unordered_map<string, vector<string>> mp;
        for (int i = 0; i < strs.size(); i++) {
            string val = strs[i];
            sort(val.begin(), val.end());
            if (mp.find(val) != mp.end()) {
                mp[val].push_back(strs[i]);
            }
            else {
                vector<string> s;
                s.push_back(strs[i]);
                mp[val] = s;
            }
        }

        for (auto &m : mp) {
            group.push_back(m.second);
        }

        return group;
    }
};
