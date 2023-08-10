class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        int rotate = k % len;
        if (rotate == 0)
            return;

        vector<int> temp = nums;
        for (int x = 0; x < len; x++) {
            if (x < rotate) {
                nums[x] = temp[x + len - rotate];
            }
            else {
                nums[x] = temp[x - rotate];
            }
        }
    }
};
