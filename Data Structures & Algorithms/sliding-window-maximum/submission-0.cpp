class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& a, int k) {
        int sz = a.size() - k + 1;
        vector<int> ans;
        for (int l = 0; l < sz; l++) {
            int mx = *max_element(a.begin() + l, a.begin() + l + k);
            ans.push_back(mx);
        }
        return ans;
    }
};
