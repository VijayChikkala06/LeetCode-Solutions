class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long fir = LLONG_MIN, sec = LLONG_MIN, thi = LLONG_MIN;
        for(int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            if(num == fir || num == sec || num == thi)
                continue;
            if(num > fir)
            {
                thi = sec;
                sec = fir;
                fir = num;
            }
            else if(num > sec)
            {
                thi = sec;
                sec = num;
            }
            else if(num > thi)
                thi = num;
        }
        if(thi == LLONG_MIN)
            return fir;
        return thi;
    }
};