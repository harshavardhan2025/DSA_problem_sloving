class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());

        int count=0;
        for(int i=0;i<arr1.size();i++){
            int flag = 1;
            for(int j=0;j<arr2.size();j++){
                
                if(abs(arr1[i]-arr2[j]) <= d){
                    flag=0;
                    break;
                }
            }

            if(flag!=0){
              count++;
            }
        }
        return count;
    }
};