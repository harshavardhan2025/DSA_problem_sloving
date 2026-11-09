class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count=0;
        map<char,int> mp;
        int k=0;
        for(int i=0;i<s.length();i++){
           
            while(mp[s[i]]>0){
                mp[s[k]]--;
                k++;
            }
            mp[s[i]]++;
            count = max(count, i-k+1);
        }
        return count;
    }
};