class Solution {
public:
    bool checkString(string s) {
        string s1 = s;
        sort(s1.begin(),s1.end());

       return s1==s;
    }
};