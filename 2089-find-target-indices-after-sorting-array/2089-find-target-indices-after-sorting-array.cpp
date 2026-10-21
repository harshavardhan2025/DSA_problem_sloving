class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> arr;
        for(int i=0;i<nums.size();i++){
            if(target==nums[i]){
                arr.push_back(i);
            }
            
            if(target < nums[i]){
                break;
            }
        }
        return arr;
    }
};