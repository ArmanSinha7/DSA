class Solution {
public:
    string reversePrefix(string s, int k) {
        string prefix = s.substr(0,k);
        reverse(prefix.begin(),prefix.end());
        return prefix + s.substr(k);
    }
};