class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int op = 0;

        for(int i=0;i<nums.size();i++){
            int n = nums[i]/3;
            op+=min(nums[i]-(n*3),((n+1)*3)-nums[i]);
        }
        return op;
    }
};