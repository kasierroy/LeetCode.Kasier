class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Resize num1 to only use the specified m size.
        nums1.resize(m);
        // Insert all contents of nums2 to nums1.
        nums1.insert(nums1.begin(), nums2.begin(), nums2.end());
        // Sort nums1 again to non-decreasing order.
        sort(nums1.begin(), nums1.end());
    }
};
