class Solution {
public:
    int getMaximumGenerated(int n) {
        
        if( n == 0 )    return 0;
        if( n == 1 )    return 1;
        
        vector<int> dp( n+1, 0 );
        dp[0] = 0;
        dp[1] = 1;
        
        int loop = (n-1)/2;
        
        for(int i=1;i<=loop;i++){
            dp[ 2*i ]       = dp[i];
            dp[ 2*i + 1 ]   = dp[i] + dp[i+1];
        }
        
        //print
        for(int i=0;i<dp.size();i++){
            cout << dp[i] << " ";
        }
        
        return *max_element( dp.begin(), dp.end() );
    }
};