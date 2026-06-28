class Solution {
public:
    int trap(vector<int>& h) {
    int n = h.size();
int  l =0,r=n-1;
int lmax = h[l],rmax= h[r];
int water=0;
while(l<r){
    if(lmax<rmax){
    l++;
    lmax = max(lmax,h[l]);
    water+=lmax-h[l];
}    
else{
  r--;
    rmax = max(rmax,h[r]);
    water+=rmax-h[r];  
}
}
return water;
    }
};