class Solution {
public:
    string reversePrefix(string word, char ch) {
        int ind = word.find(ch);

        if(ind == string::npos){
            return word;
        }

        int left=0;
        while(left<ind){
            swap(word[left],word[ind]);
            left++;
            ind--;
        }

        return word;
    }
};