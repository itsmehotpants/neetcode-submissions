class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
                int n = t.size();
        vector<int>res(n);
        for(int i =0;i<n;i++){
            for(int j=i+1;j<n && !res[i];j++){
                if(t[j]>t[i]) res[i] = (j-i);
                
            }
        }
        return res;
    }
};
