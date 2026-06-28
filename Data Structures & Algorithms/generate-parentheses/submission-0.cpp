class Solution {
public:
vector<string> res;

// bool isvalid(string s){
//     int cnt= 0;
//     for(char c:s){
//         if(c=='(') cnt++;
//         else cnt--;
//         if(cnt<0) return false;

//     }
//     return cnt==0;
// }
void solve(string &curr,int n,int open ,int close){
    if(curr.length() == 2*n){
            res.push_back(curr);
                return;
    }
    if(open<n){
    curr.push_back('(');
    solve(curr,n,open+1,close);
    curr.pop_back();
    }
    if(open>close){
    curr.push_back(')');
    solve(curr,n,open,close+1);
    curr.pop_back();
}
}
    vector<string> generateParenthesis(int n) {
        string curr = "";
        int open =0,close=0;

        solve(curr,n,open,close);
        return res;

    }
};