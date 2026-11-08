class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>> ans;
        string a="",b="";
        for(int i=0;i<s1.length();i++){

            if(s1[i]!=s2[i]){
                   a+=s1[i];
                   b+=s2[i];
            }
            else if(a.length()>0){
                ans.push_back({a,b});
                a="";
                b="";
            }

        }
        
        if(a.length()>0){
            ans.push_back({a,b});
        }
          
        return ans;
    }
};