class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
         array<int, 101> cnt = {};
        for (int num : nums) ++cnt[num];
        // compute answer
        int ans = 0;
        int mx = 0;
        for (int c : cnt) {
            if (c > mx) {
                ans = c;
                mx = c;
            } else if (c == mx) {
                ans += c;
            }
        }
        return ans;
    }
};