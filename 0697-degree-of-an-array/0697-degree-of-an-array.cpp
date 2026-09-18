class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> freq;
        unordered_map<int, int> first;
        unordered_map<int, int> last;
        int degree = 0;
        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            freq[x]++;
            if (first.count(x) == 0) {
                first[x] = i;
            }
            last[x] = i;
            if (freq[x] > degree) {
                degree = freq[x];
            }
        }
        int ans = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            if (freq[x] == degree) {
                int length = last[x] - first[x] + 1;
                if (length < ans) {
                    ans = length;
                }
            }
        }
        return ans;
    }
};
