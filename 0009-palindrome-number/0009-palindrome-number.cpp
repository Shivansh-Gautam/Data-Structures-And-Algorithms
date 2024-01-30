class Solution {
public:

    int reverse(int x) {
       long long ans =0;
        while(x!=0){
            ans = ans * 10 + x%10;
            x=x/10;
        }
        if(ans>INT_MAX || ans<INT_MIN) return 0;
        return (int)ans;
    }

    bool isPalindrome(int x) {
        if(x<0) return 0;
        int res=reverse(x);
        if(x==res) return 1;
        else return 0;
    }
};