class Solution { 
public: 
    vector<int> searchRange(vector<int>& nums, int target) { 
        int l=0; 
        int r=nums.size()-1; 
        vector<int> arr={-1,-1}; 
        int t=-1; 
        if(nums.size()==0){ 
            return arr; 
        } 
        while(l<=r){ 
            int mid = l+(r-l)/2; 
            if(nums[mid]==target){ 
                t=mid; 
                break; 
            } 
            if(nums[mid]<target){ 
                l=mid+1; 
            } 
            if(nums[mid]>target){ 
                r=mid-1; 
            } 
        } 
        if(t==-1){ 
            return arr; 
        } 
        int ll=0; 
        int rl=t; 
        while(ll<=rl){ 
            int mid = ll+(rl-ll)/2; 
            if(nums[0]==target){ 
                arr[0]=0; 
                break; 
            } 
            if(nums[mid] == target && (mid == 0 || nums[mid-1] != target)){ 
                arr[0]=mid; 
                break; 
            } 
            else if(nums[mid]<target){ 
                ll=mid+1; 
            } 
            else{ 
                rl=mid-1; 
            } 
        } 
        int lr=t; 
        int rr=nums.size()-1; 
        while(lr<=rr){ 
            int mid = lr+(rr-lr)/2; 
            if(nums[nums.size()-1]==target){ 
                arr[1]=nums.size()-1; 
                break; 
            } 
            if(nums[mid] == target){ 
                if(mid == nums.size()-1 || nums[mid+1] != target){ 
                    arr[1] = mid; 
                    break; 
                } 
                else{ 
                    lr = mid + 1; 
                } 
            } 
            else if(nums[mid]<target){ 
                lr=mid+1; 
            } 
            else{ 
                rr=mid-1; 
            } 
        } 
        return arr; 
    } 
};