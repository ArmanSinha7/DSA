class Solution {
public:
    int mirrorDistance(int n) {
        int revd = 0;
        int t = n;
        while(n!=0){
            revd*=10;
            revd+=n%10;
            n/=10;
        }
        return abs(revd-t);

    }
};
