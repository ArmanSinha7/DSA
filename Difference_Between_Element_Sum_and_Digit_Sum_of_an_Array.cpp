class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        int dsum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(nums[i]>9){
                while(nums[i]>0){
                    dsum+=nums[i]%10;
                    nums[i]/=10;
                }
            }
            else{
                dsum+=nums[i];
            }
        }
        return sum-dsum;
    }
};