class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int,int>mp1;
        map<int,int>mp2;
        for(auto c:s){
            mp1[c]++;
        }
        for(auto l:t){
            mp2[l]++;
        }
        if(mp1==mp2) return true;
        else return false;
    }
};
