class Solution {
public:
    bool rotateString(string s, string goal) {
        queue<char> q1,q2;
        if(s.length()!=goal.length()) return false;
        for(int i=0;i<s.length();i++){
            q1.push(s[i]);
        }
        for(int i=0;i<goal.length();i++){
            q2.push(goal[i]);
        }
        int k = goal.length();
        while(k--){
            char ch = q1.front();
            q1.pop();
            q1.push(ch);
            if(q1==q2) return true;
        }
        return false;
    }
};