class Solution {
public:
    int differenceOfSums(int n, int m) {
        int tsum = n*(1+n)/2;
        int dsum = m*((n/m)*((n/m)+1))/2;
        return tsum-dsum-dsum;
    }
};