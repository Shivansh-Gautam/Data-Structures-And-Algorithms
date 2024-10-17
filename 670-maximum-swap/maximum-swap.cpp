class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        stack<int> st;
        vector<int>ngr(s.size(),-1);
        int n = s.size();

        for(int i=n-1;i>=0;--i){
            while(!st.empty() && s[i] > s[st.top()]){
                st.pop();
            }

            if(!st.empty()){
                if(ngr[st.top()] == -1) ngr[i] = st.top();
                else 
                    ngr[i] = ngr[st.top()];
            }

            st.push(i);
        }
        
        for(int i=0;i<n;i++){
            if(ngr[i] != -1 && s[i] != s[ngr[i]]){
                swap(s[i],s[ngr[i]]);break;
            }
        }
        return stoi(s);
    }
};