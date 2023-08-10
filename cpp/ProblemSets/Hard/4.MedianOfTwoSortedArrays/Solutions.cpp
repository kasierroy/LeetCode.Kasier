//
// LINK: https://leetcode.com/problems/median-of-two-sorted-arrays/
//
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> current;

        for (auto &num : nums1)
            current.push_back(num);

        for (auto &num : nums2)
            current.push_back(num);

        sort(current.begin(), current.end());
        int length = current.size();

        if (length%2 == 0)
            return (current[(length/2) - 1] + current[length/2])/2.0;
        else
            return current[length/2];
    }
};
