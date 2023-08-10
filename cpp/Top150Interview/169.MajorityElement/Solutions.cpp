class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int previousNum = nums[0];
        int highestNum = nums[0];
        int highestCounter = 0;
        int tempCounter = 0;
        for(int i = 0; i < nums.size(); i++) {
            if (previousNum != nums[i]) {
                if (tempCounter > highestCounter) {
                    highestCounter = tempCounter;
                    highestNum = previousNum;
                }
                previousNum = nums[i];
                tempCounter = 0;
            }
            tempCounter++;
        }

        if (tempCounter > highestCounter)
            highestNum = previousNum;

        return highestNum;
    }
};
