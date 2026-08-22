class Solution {
public:
    vector<int> plusOne(vector<int>& arr) {
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]<9){
                arr[i]++;
                return arr;
            }
            arr[i]=0;
        }
        arr.insert(arr.begin(),1);
        return arr;
    }
};