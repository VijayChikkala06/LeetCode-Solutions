class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int dig_cnt = 0;
            while(num > 0) {
                int r = num % 10;
                dig_cnt++;
                num /= 10;
            }
            if(dig_cnt % 2 == 0)
                ans++;
        }
        return ans;
    }
};