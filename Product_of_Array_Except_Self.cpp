class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mul = 1;
        int zero=0;
        bool setzero=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                setzero=true;
                zero++;
            }
            else{
                mul*=nums[i];
            }
        }
        if(zero==nums.size()){
            return nums;
        }
        for(int i=0;i<nums.size();i++){
            if(zero>1){
                nums[i]=0;
            }
            else if(nums[i]==0){
                nums[i]=mul;
            }
            else{
                if(setzero){
                    nums[i]=0;
                }
                else{
                int t = nums[i];
                nums[i]=mul/t;
                }
            }
        }
        return nums;
    }
};