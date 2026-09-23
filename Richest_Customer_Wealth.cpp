class Solution { 
public: 
    int maximumWealth(vector<vector<int>>& accounts) { 
        int sum=0; 
        for(int i=0;i<accounts.size();i++){ 
            int t=0; 
            for(int j=0;j<accounts[i].size();j++){ 
                t+=accounts[i][j]; 
            } 
            if(sum<t){ 
                sum=t; 
            } 
        } 
        return sum; 
    } 
};