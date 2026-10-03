class Solution {
public:
    string reversePrefix(string s, int k) {
        string prefix = s.substr(0,k);
        for(int i=0;i<k/2;i++){
            swap(prefix[i],prefix[k-1-i]);
        }
        s.replace(0,k,prefix);
        return s;
    }
};