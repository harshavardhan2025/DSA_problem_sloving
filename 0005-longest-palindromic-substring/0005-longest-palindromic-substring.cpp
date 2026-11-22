class Solution {
public:
    string longestPalindrome(string s) {
        int count=0;
        int maxlen = 0;
        int start = 0;
        string ans="";
        for(int i=0;i<s.length();i++){
            int l=i,r=i;
            while(l>=0 && r<s.length() && s[r]==s[l]){
                if(maxlen < r-l+1){
                    maxlen = r-l+1;
                    start = l;
                }
                l--;
                r++;
            }
            l=i,r=i+1;
            while(l>=0 && r<s.length() && s[r]==s[l]){
                if(maxlen < r-l+1){
                    maxlen = r-l+1;
                    start = l;
                }
                l--;
                r++;
            }
            
        }
        return s.substr(start,maxlen);
    }
};