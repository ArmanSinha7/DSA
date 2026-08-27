class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[count]=nums[i];
                if(i!=count){
                nums[i] = 0;}
                count++;
            }
        }
    }
};
