class Solution {

public:

    long long countCommas(long long n) {

        long long sum=0;

        for(long long x=1000;x<=n;x*=1000){

            sum+=n-x+1;

        }

        return sum;

    }

};