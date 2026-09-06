class Solution { 
public: 
    int threeSumClosest(vector<int>& nums, int target) { 
        sort(nums.begin(),nums.end()); 
        int sum = nums[0]+nums[1]+nums[2]; 
        int min = abs((nums[0]+nums[1]+nums[2])-target); 
        for(int i=0;i<nums.size();i++){ 
            int left=i+1; 
            int right=nums.size()-1; 
            while(left<right){ 
                int rn = (nums[i]+nums[left]+nums[right])-target; 
                int d =abs(rn); 
                if(d<min){ 
                    min = d; 
                    sum = rn+target; 
                } 
                if(rn<0){ 
                    left++; 
                } 
                else if(rn>0){ 
                    right--; 
                } 
                else{ 
                    return rn+target; 
                } 
            } 
        } 
        return sum; 
    } 
};