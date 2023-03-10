//
// LINK: https://leetcode.com/problems/add-binary/
//
class Solution {
public:
    char getBinary(string a, int pos)
    {
        if (pos >= a.size())
            return '0';
        else
            return a[pos];
    }
    string addBinary(string a, string b) {
        string sum;
        bool carry = false;
        int num1 = a.size() - 1;
        int num2 = b.size() - 1;
        while (num1 >= 0 || num2 >= 0) {
            if (getBinary(a, num1) == '1' && getBinary(b, num2) == '1') {
                if (carry) {
                    sum += '1';
                } else {
                    sum += '0';
                }
                carry = true;
            } else if (getBinary(a, num1) == '0' && getBinary(b, num2) == '1' ||
                       getBinary(a, num1) == '1' && getBinary(b, num2) == '0'){
                if (carry) {
                    sum += '0';
                    carry = true;
                } else {
                    carry = false;
                    sum += '1';
                }
            } else {
                if (carry) {
                    sum += '1';
                    carry = false;
                }
                else {
                    sum += '0';
                    carry = false;
                }
            }
            num1--;
            num2--;
        }

        if (carry) sum += '1';

        reverse(sum.begin(), sum.end());

        return sum;
    }
};
