class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int rsum=0;
        for(int x:nums){
            rsum+=x;
        }

        int lsum=0;
        int t=0;

        for(int i=0;i<nums.size();i++){
            rsum-=nums[i];
            lsum+=t;
            t=nums[i];
            nums[i]=abs(rsum-lsum);
        }

        return nums;
    }
};