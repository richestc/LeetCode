class Solution {
public:
    int countVowelStrings(int n) {
        
        int vowels = 5;
        
        vector<vector<int>> dp( n+1, vector<int> (vowels, 0) );
        
        for(int i=0;i<dp.size();i++){
            for(int j=0;j<vowels;j++){
                dp[0][j] = 1;
                dp[i][ vowels-1 ] = 1;
            }
        }
        
        for(int i=1;i<dp.size();i++){
            for(int j=0;j<vowels-1;j++){            //last column doesnt add, stays 1
                
                for(int k=j;k<vowels;k++){
                    dp[i][j] = dp[i][j] + dp[i-1][k];
                }
                
            }
        }
        
        //print
        for(int i=0;i<dp.size();i++){
            for(int j=0;j<dp[0].size();j++){
                cout << dp[i][j] << " ";
            }   cout << endl;
        }
        
        return dp[n][0];
    }
};