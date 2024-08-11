class Solution {
public:
    string longestPalindrome(string s) {
         string res = "" ;
        int maxlength = 0 ;

        if (s.length() == 1){
            return s ;
        }

        for (int i = 0; i < s.length(); i++) {
            int left, right ;

            // for odd length palindrome
            left = i ;
            right = i ;
            while (left >= 0 && right <= s.length() && s[left] == s[right]) {
                if (right - left + 1 > maxlength) {
                    maxlength = right - left + 1 ;
                    res = s.substr(left, maxlength) ;
                }
                left-- ;
                right++ ;
            }

            // for even length palindrome
            left = i ;
            right = i+1 ;
            while (left >= 0 && right <= s.length() && s[left] == s[right]) {
                if (right - left + 1 > maxlength) {
                    maxlength = right - left + 1 ;
                    res = s.substr(left, maxlength) ;
                }
                left-- ;
                right++ ;
            }
        }
        return res ;
    }
};