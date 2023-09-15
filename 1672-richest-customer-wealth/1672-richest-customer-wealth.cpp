class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        vector<int> res;
        
        int count = 0;
        
        for(int i=0;i<accounts.size();i++){
            for(int j=0;j<accounts[i].size();j++){
                count = count + accounts[i][j];
            }
            res.push_back(count);
            count = 0;
        }
        
        return *max_element( res.begin(), res.end() );
    }
};