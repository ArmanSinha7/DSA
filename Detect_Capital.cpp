class Solution {

public:

    bool detectCapitalUse(string word) {

        int allcap=0;

        int nocap=0;

        int first=0;

        for(int i=0;i<word.size();i++){

            if(word[i]<'a'){

                allcap++;

                first--;

            }

            else{

                nocap++;

            }

        }

        if(allcap==word.size()){

            return true;

        }

        else if(nocap==word.size()){

            return true;

        }

        else if(first+1==0 && word[0]<'a'){

            return true;

        }

        return false;

    }

};