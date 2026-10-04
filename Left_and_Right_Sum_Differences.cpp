class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int total=0;
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
        }

        int left=0;

        for(int i=0;i<nums.size();i++){
            int current=nums[i];
            total-=current;
            nums[i]=abs(left-total);
            left+=current;
        }

        return nums;
    }
};