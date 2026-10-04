class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int total=0;
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
        }

        vector<int> ans;
        int left=0;

        for(int i=0;i<nums.size();i++){
            int current=nums[i];
            total-=current;
            ans.push_back(abs(left-total));
            left+=current;
        }

        return ans;
    }
};