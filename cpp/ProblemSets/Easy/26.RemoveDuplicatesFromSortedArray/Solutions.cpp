//
// LINK: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
//
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;

        int unique = nums[0];
        int k = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (unique != nums[i])
            {
                nums[k++] = nums[i];
                unique = nums[i];
            }
        }
        return k;
    }
};
