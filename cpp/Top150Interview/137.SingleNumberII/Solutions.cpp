class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
            auto itr = mp.find(nums[i]);
            if (itr->second >= 3)
                mp.erase(itr);
        }

        return mp.begin()->first;
    }
};
