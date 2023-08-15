class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> uset;
        for (int i = 0; i < nums.size(); i++) {
            uset.insert(nums[i]);
        }

        int highest = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (uset.find(nums[i] - 1) == uset.end()) {
                int current = nums[i];
                int count = 1;
                while (uset.find(current + 1) != uset.end()) {
                    current++;
                    count++;
                }

                highest = max(highest, count);
            }
        }

        return highest;
    }
};
