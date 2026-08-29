class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0;
        int maxx=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                max++;
                if(maxx<max){
                    maxx=max;
                }
            }
            else{
                max=0;
            }
        }
        return maxx;
    }
};
