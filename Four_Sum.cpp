class Solution { 
public: 
    vector<vector<int>> fourSum(vector<int>& nums, int target) { 
        sort(nums.begin(),nums.end()); 
        vector<vector<int>> arr; 
        if(nums.size()<4){ 
            return arr; 
        } 
        for(int i=0;i<nums.size();i++){ 
            if(i>0 && nums[i]==nums[i-1]){ 
                continue; 
            } 
            int j=i+1; 
            while(j<nums.size()-2){ 
                int left = j+1; 
                int right = nums.size()-1; 
                while(left<right){ 
                    long long a = (long long)nums[i]+nums[j]+nums[left]+nums[right]-target; 
                    if(a==0){ 
                        arr.push_back({nums[i],nums[j],nums[left],nums[right]}); 
                        left++; 
                        right--; 
                        while(left<right && nums[left]==nums[left-1]){ 
                            left++; 
                        } 
                        while(left<right && nums[right]==nums[right+1]){ 
                            right--; 
                        } 
                    } 
                    else if(a<0){ 
                        left++; 
                    } 
                    else{ 
                        right--; 
                    } 
                } 
                while(j<nums.size()-2 && nums[j]==nums[j+1]){ 
                    j++; 
                } 
                j++; 
            } 
        } 
        return arr; 
    } 
};