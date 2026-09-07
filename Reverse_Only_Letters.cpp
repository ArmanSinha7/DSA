class Solution {

public:

    string reverseOnlyLetters(string s) {

        int left = 0;

        int right= s.size()-1;

        while(left<right){

            if(isalpha(s[left])&&isalpha(s[right])){

                char c = s[left];

                s[left] = s[right];

                s[right] = c;

                left++;

                right--;

            }

            else if(isalpha(s[left]) && !isalpha(s[right])){

                right--;

            }

            else if(!isalpha(s[left])&& isalpha(s[right])){

                left++;

            }

            else{

                left++;

                right--;

            }

        }

        return s;

    }

};