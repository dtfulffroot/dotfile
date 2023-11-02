#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    int longestSubarray(vector<int>& nums) {
        int k = 1;
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        auto left = nums.begin();
        auto right = nums.begin();
        int max_val = 0;
        while (right < nums.end()) {
            if (*right == 0) {
                k--;
            }
            while (k < 0) {
                // 这里left不管怎么加一定会小于right 不会越界
                if (*left == 0) {
                    k++;
                }
                left++;
            }

            max_val = max(int(right - left + 1), max_val);
            right++;
        }
        return max_val - 1;
    }
};
