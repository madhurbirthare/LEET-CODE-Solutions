
class Solution {
public:
    int getLucky(string s, int k) {
        int sum = 0;
        for (int i = 0; i < s.size(); i++) {
            int res = s[i] - 'a' + 1;
            while (res > 0) {
                sum += res % 10;
                res /= 10;
            }
        }
        for (int i = 1; i < k; i++) {
            int sum2 = 0;
            while (sum > 0) {
                sum2 += sum % 10;
                sum /= 10;
            }
            sum = sum2;
        }
        return sum;
    }
};

