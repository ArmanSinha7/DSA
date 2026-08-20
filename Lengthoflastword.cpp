class Solution {
public:
    int lengthOfLastWord(string s) {
        int st=-1;
        int l=0;
        int k=0;
        int co=0;
        for(int i=0;i<s.size();i++){
            if(s[i]== ' '){
                co++;
                if(st!=-1){
                    if(co==1){
                        k=l;
                    }
                    l=0;
                }
                if(st==-1){
                    l=0;
                }
            }
            else{
                if(co>0){
                co=0;
                k=0;
                }
                if(l==0){
                    st=i;
                }
                l++;
            }
        }
        if(k>l){
            return k;
        }
        return l;
    }
};