class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int maxi = 0;
        for (auto it = st.begin(); it != st.end(); it++) {
            int num = *it;
            if (st.find(num - 1) == st.end()) {
                int count = 1;
                while (st.find(num + count) != st.end())
                    count++;
                maxi = max(maxi, count);
            }
        }
        return maxi;
    }
};