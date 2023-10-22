class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> dp(n+1, 0);     //n+1 length vector of 0's

        for(int i=1;i<=n;i++){
            dp[i] = dp[i >> 1] + (i & 1);
        }
        
        return dp;
    }
};