class Solution {
public:
    string longestPalindrome(string s) {
        int count=0;
        string ans="";
        for(int i=0;i<s.length();i++){
            string s1="";
            string s2="";
            for(int j=i;j<s.length();j++){
                 s1+=s[j];
                 s2.insert(s2.begin(),s[j]);
                 if(s1==s2){
                    if(count < s1.length()){
                        count = s1.length();
                    ans = s2;
                    }
                 }
            }
        }
        return ans;
    }
};