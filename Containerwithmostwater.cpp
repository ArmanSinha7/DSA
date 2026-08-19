class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxar=0;
        if(height.size()==1 || height.size()==0){
            return 0;
        }
        int m1=height.size()/2;
        int p1 =0;
        int p2=height.size()-1;
        while(p1<p2){
            int ar = min(height[p2],height[p1])*abs(p2-p1);
            if(maxar<ar){
                maxar=ar;
            }
            if(height[p1]<height[p2]){
            p1++;}
            else{p2--;}
        }
        return maxar;
    }
};