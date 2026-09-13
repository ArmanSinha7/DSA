class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> arr;
        arr.push_back(0);
        for(int i=1;i<n+1;i++){
            arr.push_back(arr[i>>1]+(i&1)); 
        }
        return arr;
    }
};
