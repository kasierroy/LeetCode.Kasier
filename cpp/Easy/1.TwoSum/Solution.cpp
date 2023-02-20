class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> map_target;
        for (int i = 0; i < nums.size(); i++)
        {
            if (map_target.find(target - nums[i]) == map_target.end())
            {
                map_target[nums[i]] = i;
            }
            else
            {
                return { map_target [target - nums[i]], i };
            }
        }
        return {-1, -1};
    }
};
