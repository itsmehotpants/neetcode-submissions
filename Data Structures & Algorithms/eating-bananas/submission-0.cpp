class Solution {
public:
    int minEatingSpeed(vector<int>& a, int h) {
        int l =1,  r= *max_element(a.begin(),a.end());
        int ans =r;
        while(l<=r){
            int mid = l+ (r-l)/2;
            long long hr=0;
            for(int p:a){
                hr+= (p+mid-1)/mid;
            }
            if(hr<=h){
                ans= mid;
                r= mid-1;
            }
            else l = mid+1;
        }
        return ans;
    }
};