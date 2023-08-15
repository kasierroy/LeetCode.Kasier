class Solution {
public:
    bool isHappy(int n) {
        if (n == 1)
            return true;

        unordered_set<int> set;

        while (n != 1 && !set.count(n)) {
            set.insert(n);

            int sum = 0;
            while (n != 0) {
                int temp = n % 10;
                n /= 10;
                sum += (temp * temp);
            }
            n = sum;
        }

        return n == 1;
    }
};
