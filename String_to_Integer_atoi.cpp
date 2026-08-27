class Solution {
public:
    int myAtoi(string s) {
        int start=0;
        int num=1;
        int sign=1;
        int stzero=0;
        int stsign=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==' ' && start==0){
                if(stzero!=0){
                    return 0;
                }
                if(stsign!=0){
                    return 0;
                }
                continue;
            }
            else if(s[i]==' ' &&start!=0){
                if(stzero!=0){
                    return 0;
                }
                return num*sign;
            }
            if(s[i]=='-'){
                if(start!=0){
                    return num*sign;
                }
                if(stzero!=0){
                    return 0;
                }
                if(stsign!=0){
                    return 0;
                }
                stsign++;
                sign=-1;
                continue;
            }
            else if(s[i]=='+'){
                if(start!=0){
                    return num*sign;
                }
                if(stzero!=0){
                    return 0;
                }
                if(stsign!=0){
                    return 0;
                }
                stsign++;
                continue;
            }
            if(isalpha(s[i]) || s[i]=='.'){
                if(start==0){
                    return 0;
                }
                else{
                    return num*sign;
                }
            }
            else{
                if(start==0 && s[i]=='0'){
                    stzero++;
                    continue;
                }
                else if(start!=0 && s[i]=='0'){
                int digit = 0;

                if (num > (INT_MAX - digit) / 10) {
                    return sign == 1 ? INT_MAX : INT_MIN;
                }

                num *= 10;
                continue;
                }
                if(start==0){
                    num=s[i]-'0';
                    start++;
                    continue;
                }
                start++;
                int digit = s[i] - '0';
                if (sign == 1 && num > (INT_MAX - digit) / 10) {
                    return INT_MAX;
                }
                if (sign == -1 && num > (INT_MAX - digit) / 10) {
                    return INT_MIN;
                }   
                num = num * 10 + digit;
            }
        }
        if(start==0){
            return 0;
        }
        return num*sign;
    }
};
