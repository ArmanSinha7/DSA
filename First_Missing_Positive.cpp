class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums.size() || nums[i]<=0){
                nums[i] = nums.size()+1;
            }
        }
        for(int i=0;i<nums.size();i++){
            int t = abs(nums[i]);
            if(t>nums.size()){
                continue;
            }
            t--;
            if(nums[t]>0){
            nums[t]*=-1;}
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                return i+1;
            }
        }
        return nums.size()+1;
    }
};