class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> output;
        if (nums.size() == 0)
            return output;

        int start = nums[0];
        int end = nums[0];
        int current = start;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > current + 1) {
                end = current;
                string data = to_string(start);
                if (start != end) {
                    data += "->";
                    data += to_string(end);
                }
                output.push_back(data);
                end = current = start = nums[i];
            }
            current = nums[i];
        }

        string data = to_string(start);
        if (start != current) {
            data += "->";
            data += to_string(current);
        }
        output.push_back(data);

        return output;
    }
};
