class Solution {
public:
    bool check(vector<int>& nums) {
        int idx = 0;
        int n = nums.size();
        for(int i = 1; i < n ; i++)
        {
            if(nums[i-1] > nums[i])
            {
                if(idx != 0)
                    return false;
                idx = i;
            }
        }
        if(idx == 0)
            return true;
        if(nums[n - 1] > nums[0])
            return false;
        return true;
    }
};