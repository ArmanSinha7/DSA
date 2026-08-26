class Solution {

public:

    int fib(int n) {

        if(n==0){

            return 0;

        }

        if(n==1){

            return 1;

        }

        int n1=1;

        int n2=0;

        for(int i=2;i<=n;i++){

            int temp = n1;

            n1 = temp+n2;

            n2 = temp;

        }

        return n1;}
};
