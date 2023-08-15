class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (mp.find(diff) == mp.end()) {
                mp[nums[i]] = i;
            }
            else {
                return { mp[diff], i};
            }
        }

        return {-1, -1};
    }
};
