class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prev=0;
        int max=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=max){
                prev = max;
                max = nums[i];
            }
            else if(nums[i]>=prev && nums[i]<max){
                prev = nums[i];
            }
        }
        return (max-1)*(prev-1);
    }
};