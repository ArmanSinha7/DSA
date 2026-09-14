class Solution { 
public: 
    int maxDistance(vector<int>& colors) { 
        int left = 0; 
        int right = colors.size()-1; 
        int l1 = 0; 
        int l2 = right; 
        while(l1<=l2){ 
            if(colors[l1]!=colors[right]){ 
                return right-l1; 
            } 
            if(colors[left]!=colors[l2]){ 
                return l2-left; 
            } 
            l1++; 
            l2--; 
        } 
        return 0; 
    } 
};