class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n=h.size();
        int ans=0;

        for(int i=0;i<n;i++){
          int minm=h[i];
          for(int j=i;j<n;j++){
             minm=min(h[j],minm);
             int area=minm*(j-i+1);
             ans=max(area,ans);
          }
        }
        return ans; 
    }
};