class Solution {
public:
    int isPossible(vector<int>&weights, int days, int capacity) {
        int load = 0;
        int min_day = 1;
        for(int i = 0; i < weights.size(); i++) {
            if(load + weights[i] <= capacity)
                load += weights[i];
            else{
                min_day++;
                load = weights[i];
            }
        }
        return min_day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int lo = *max_element(weights.begin(), weights.end());
        int hi = 0;
        for(int i = 0; i < weights.size(); i++) {
            hi += weights[i];
        }
        while(lo <= hi) {
            int mid = (lo + hi) / 2;
            int req_days = isPossible(weights, days, mid);
            if(req_days <= days)
                hi = mid - 1;
            else
                lo = mid + 1;
        }
        return lo;
    }
};