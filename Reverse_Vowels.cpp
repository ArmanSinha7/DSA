class Solution {

public:

    bool isVowel(char ch) {

        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||

            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

    }

    string reverseVowels(string s){

        int st=0;

        int en=s.size()-1;

        while(st<en){

            if(isVowel(s[st])){

            }

            else{

                st++;

            }

            if(isVowel(s[en])){

            }

            else{

                en--;

            }

            if(isVowel(s[st]) && isVowel(s[en])){

                char t = s[st];

                s[st] = s[en];

                s[en] = t;

                st++;

                en--;

            }

        }

        return s;

    }

};
