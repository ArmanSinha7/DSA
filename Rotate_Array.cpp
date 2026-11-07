class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.empty()){
            return;
        }
        reverse(nums.begin(),nums.end());
        k = k%nums.size();
        int right = k-1;
        int left = 0;
        while(left<right){
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        }
        reverse(nums.begin()+k,nums.end());
    }
};