class Solution {
public:
    int countSegments(string s) {
        int count=0;
        int space=1;
        for(int i=0;i<s.size();i++){
            if(space==1 && s[i]!=32){
                count++;
                space=0;
            }
            else if(s[i]==32){
                space=1;
            }
        }
        return count;
    }
};