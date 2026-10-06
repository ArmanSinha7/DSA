class Solution {
public:
    string reversePrefix(string word, char ch) {
        int ind = word.find(ch);

        if(ind == string::npos){
            return word;
        }

        string ans = word.substr(0, ind + 1);
        for(int i = ind; i >= 0; i--){
            ans[ind - i] = word[i];
        }

        return ans + word.substr(ind + 1);
    }
};