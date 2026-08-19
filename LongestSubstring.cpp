class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int arr[95] = {0};
        int ind[95] = {-1};
        string cs;
        string ls;
        for(int i=0;i<s.size();i++){
            int te;
            if(s[i]>47 && s[i]<=57){
                te=s[i]-48+1;
            }
            else if(s[i]>64 && s[i]<=90){
                te=s[i]-65+11;
            }
            else if(s[i]>96 && s[i]<=122){
                te=s[i]-97+37;
            }
            else if(s[i]==32){
                te=0;
            }
            else if(s[i]>=33 && s[i]<=47){
                te=s[i]-33+15+37;
            }
            else if(s[i]>=58 && s[i]<=64){
                te=s[i]-33+15+37+7;
            }
            else if(s[i]>=91 && s[i]<=96){
                te=s[i]-33+15+37+7+6;
            }
            else if(s[i]>=123 && s[i]<=126){
                te=s[i]-33+15+37+7+6+4;
            }
            arr[te]++;
            if(arr[te]>1){
                cs.erase(0,arr[te]);
            }
            ind[s[te]] = i;
            cs+=s[i];
            if(cs.size()>ls.size()){
                ls = cs;
            }
        }
        return ls.size();
    }
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int arr[26] = {0};
        int ind[26] = {-1};
        string cs;
        string ls;
        for(int i=0;i<s.size();i++){
            arr[s[i]-97]++;
            if(arr[s[i]-97]>1){
                cs.erase(0,arr[s[i]-97]);
            }
            ind[s[i]-97] = i;
            cs+=s[i];
            if(cs.size()>ls.size()){
                ls = cs;
            }
        }
        return ls.size();
    }
};