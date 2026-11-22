class Solution {
public:
    bool checkString(string s) {
        int check =0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='b'){
                check=1;
            }
            if(check==1 && s[i]=='a'){
                return false;
            }
        }
        return true;
    }
};