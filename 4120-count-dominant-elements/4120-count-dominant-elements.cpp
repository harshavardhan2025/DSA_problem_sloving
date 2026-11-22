class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){

            float sum=0;
            float k=0;
            if(i>0){
                sum+=nums[i-1];
                k++;
            }

            if(i<nums.size()-1){
               sum+= nums[i+1];
               k++;
            }
            if(k>0){
            sum = sum/k;
            }
            if(sum <= nums[i]){
                count++;
            }
        }

        return count;
    }
};