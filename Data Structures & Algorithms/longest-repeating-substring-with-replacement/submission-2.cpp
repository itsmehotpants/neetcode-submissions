class Solution {
public:
    int characterReplacement(string s, int k) {
        int cnt = 1;
    //    unordered_map<char,int>mp;

    //    for(char s:string){
    //     mp[s]++;
    //    } 
    // int j=0,ans=0;
    // int tempk = k;
    // for(int i =0;i<s.size();i++){
    //     if(s[i]==s[j]) cnt++;
    //     else{
    //         if(tempk>0){
    //             cnt++;
    //             tempk--;
    //         }
    //         else{
    //             j++;
    //             cnt=1;
    //             tempk = k;
    //         }
    //         ans= max(ans,cnt);
    //     }
    // }
    // return ans;

  int l = 0;
        int r = 0; 
        vector<int> freq(26,0);
        
        int maxFreq = 0;
        int maxlen = 0;

        while(r < s.length()){ 

            freq[s[r] - 'A']++; 

            maxFreq = max(freq[s[r] - 'A'], maxFreq); 
            if((r - l + 1) - maxFreq > k){ 
                freq[s[l] - 'A']--; 
                l++;
            }

            maxlen = max(maxlen,r - l + 1); 
            r++;
        }

        return maxlen; 

    }
};
