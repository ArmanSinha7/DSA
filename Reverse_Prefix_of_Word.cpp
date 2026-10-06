class Solution {
public:
    string reversePrefix(string word, char ch) {
        int ind=-1;
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                ind=i;
                break;
            }
        }
        int left = 0;
        while(left<=ind){
            char t = word[left];
            word[left]=word[ind];
            word[ind]=t;
            ind--;
            left++;
        }
        return word;
    }
};