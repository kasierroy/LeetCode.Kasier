class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t reverse = 0;
        int bit = 0;
        while (n > 0) {
            reverse += (n % 2 << (31 - bit));
            n >>= 1;
            bit++;
        }

        return reverse;
    }
};
