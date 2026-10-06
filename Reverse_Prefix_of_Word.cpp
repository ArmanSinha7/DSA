class Solution {
public:
    string reversePrefix(string word, char ch) {
        int ind = word.find(ch);

        if(ind == string::npos){
            return word;
        }

        int left = 0;
        int right = ind;

        while(left < right){
            swap(word[left], word[right]);
            left++;
            right--;
        }

        return word;
    }
};