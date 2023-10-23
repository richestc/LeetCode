class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> dp;
        
        for(int i=1;i<=numRows;i++){
            vector<int> temp( i, 0 );
            dp.push_back( temp );
        }
        
        for(int i=0;i<dp.size();i++){
            for(int j=0;j<dp[i].size();j++){
                
                if( j == 0 || j == dp[i].size()-1 ){
                    dp[i][j] = 1;
                }
                
            }
        }
        
        for(int i=0;i<dp.size();i++){
            for(int j=0;j<dp[i].size();j++){
                
                if( dp[i][j] == 0 ){
                    dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]);
                    //cout << i << " " << j << endl;
                }
                
            }
        }
        
        
        return dp;
    }
};