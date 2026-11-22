class Solution {
public:
    bool checkString(string s) {
        int count =0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'){
                count++;
            }
        }

        for(int i=0;i<s.length();i++){
            if(s[i]=='b' && count >0){
                return false;
            }

            if(s[i]=='a'){
                count--;
            }
        }
        return true;
    }
};