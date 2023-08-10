class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto it = nums.begin();
        int counter = 0;
        int duplicate = 0;
        int previous = *it;
        while (it != nums.end()) {
            if (previous != *it) {
                previous = *it;
                duplicate = 0;
            }
            else if (duplicate < 2) {
                duplicate++;
                counter++;
                ++it;
            }
            else {
                nums.erase(it);
            }
        }

        return counter;
    }
};
