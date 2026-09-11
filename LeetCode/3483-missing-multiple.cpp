class Solution { 
public: 
    int missingMultiple(vector<int>& nums, int k) { 
        vector<int> arr(101,0); 
        arr[0]=1; 
        int max=0; 
        for(int i=0;i<nums.size();i++){ 
            if(nums[i]%k==0){ 
                arr[nums[i]]=1; 
                if(nums[i]>max){ 
                    max=nums[i]; 
                } 
            } 
        } 
        for(int i=0;i<arr.size();i+=k){ 
            if(arr[i]==0){ 
                return i; 
            } 
        } 
        return max+k; 
    } 
};
