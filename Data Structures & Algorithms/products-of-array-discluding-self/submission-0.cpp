class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int cnt0 = 0;
        for (int num : nums) {
            if (num == 0) cnt0++;
            else product *= num;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (cnt0 == 0) {
                nums[i] = product / nums[i];
            } else if (cnt0 == 1) {
                if (nums[i] == 0) nums[i] = product;
                else nums[i] = 0;
            } else {
                nums[i] = 0;
            }

        }
        return nums;
    }
};