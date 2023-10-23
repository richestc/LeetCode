class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<vector<int>> dp;
        for(int i=1;i<=rowIndex+1;i++){
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
        
        //above is all definition
        
        for(int i=0;i<dp.size();i++){
            for(int j=0;j<dp[i].size();j++){
                if( dp[i][j] == 0 ){
                    dp[i][j] = ( dp[i-1][j-1] + dp[i-1][j] );
                }
            }
        }
        
        //print
        for(int i=0;i<dp.size();i++){
            for(int j=0;j<dp[i].size();j++){
                cout << dp[i][j] << " ";
            }
            cout << endl;
        }
        
        return dp[ rowIndex ];
    }
};