class Solution {
public:
    int maxArea(vector<int>& h) {
        int l = h[0],r=h[h.size()-1];
        int area=0;
        for(int i =0;i<h.size();i++){
         

    for(int j=i+1;j<h.size();j++){
        area= max(area,min(h[i],h[j])*(j-i));
    }

        }
        return area;
    }
};
