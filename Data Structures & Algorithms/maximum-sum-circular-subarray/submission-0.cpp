class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int gmax = nums[0],gmin = nums[0];
        int curmax= 0,curmin=0,total=0;

        for(int i:nums){
            curmax = max(i,curmax+i);
            curmin = min(i,curmin+i);
            total+=i;
            gmax=max(gmax,curmax);
            gmin = min(gmin,curmin);
        }
        return gmax>0 ? max(gmax,total-gmin):gmax;
    }
};