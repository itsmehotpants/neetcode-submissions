class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& a, vector<int>& b) {
       // stack<int,int>st;
            int sz = b.size();
            vector<int>ans;
        // for(int i =n-1;i>=0;i--){
        //     while(!st.empty()&& st.top()<=a[i])
        //     {
        //         st.pop();
        //     }
        //     if(st.empty()) ans[i]=-1;
        //     else ans[i]=st.top();

        //     st.push()
        
        
        // }
        for(int n:a){
            int nge =-1;
            for(int i =sz-1;i>=0;i--){
                if(b[i]>n) nge = b[i];
            
            else if(b[i]==n) break;
        }
        ans.push_back(nge);
        }
return ans;    }
};