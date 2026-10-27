
class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        int maxi = -1;
        int left = -1, right = -1;
        for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] - '0' > maxi) {
            maxi = s[i] - '0';
            }
        }
        for (int i = 0; i < s.size(); i++) {
            for (int j = s.size() - 1; j > i; j--) {
                if (s[j] > s[i]) {
                    if (left == -1 || s[j] > s[right]) {
                        left = i;
                        right = j;
                    }
                }
            }
            if (left != -1) break;
        }
        if (left != -1)
        swap(s[left], s[right]);
        return stoi(s);
    }
};
