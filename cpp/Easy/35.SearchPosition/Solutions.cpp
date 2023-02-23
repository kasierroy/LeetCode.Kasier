//
// LINK: https://leetcode.com/problems/search-insert-position/
//
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index = nums.size();
        for (int i = 0; i < nums.size(); i++)
        {
            if (i == 0 && target < nums[i])
                return i;

            if (nums[i] == target)
                return i;

            if ((i < (nums.size()-1)) &&
                (target > nums[i]) &&
                (target < nums[i+1]))
                index = i+1;
        }

        return index;
    }
};
