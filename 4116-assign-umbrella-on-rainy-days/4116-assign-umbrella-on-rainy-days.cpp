class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        vector<string> ans;
        int a=0,b=0;
        for(int i=0;i<rain.size();i++){
            if(i+1<rain.size() && rain[i]==1 && rain[i+1]==1){
                if(a<=b){
                ans.push_back("Alice");
                a++;
                }
                else{
                    ans.push_back("Bob");
                    b++;
                }
            }
            else if(rain[i]==1){
                ans.push_back("Bob");
                b++;
            }
            else{
                ans.push_back("None");
            }
        }

        return ans;
    }
};