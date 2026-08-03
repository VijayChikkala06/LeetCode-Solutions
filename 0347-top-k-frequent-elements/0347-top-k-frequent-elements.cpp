class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> freq;
        for(int i = 0; i < nums.size(); i++)
        {
            freq[nums[i]]++;
        }
        vector < pair <int, int>> ans;
        for(auto it = freq.begin(); it != freq.end(); it++)
        {
            ans.push_back({it -> second, it -> first});
        }
        sort(ans.begin(), ans.end(), greater<pair<int, int>>());
        vector <int> freq_ele;
        for(int i = 0; i < k; i++)
        {
            freq_ele.push_back(ans[i].second);
        }
        return freq_ele;
    }
};