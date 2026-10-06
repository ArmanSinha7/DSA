class Solution {
public:
    string reversePrefix(string word, char ch) {
        int ind = word.find(ch);

        if(ind == string::npos){
            return word;
        }

        string prefix = word.substr(0, ind + 1);
        reverse(prefix.begin(), prefix.end());

        return prefix + word.substr(ind + 1);
    }
};