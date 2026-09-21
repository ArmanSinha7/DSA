class Solution {

public:

    int xorOperation(int n, int start) {

        int xorsum=0;

        for(int i=0;i<n;i++){

            xorsum^= start+2*i;

        }

        return xorsum;

    }

};