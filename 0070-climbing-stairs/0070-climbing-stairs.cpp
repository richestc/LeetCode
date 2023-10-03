class Solution {
// private:
//     int res = 0;
    
//     void recursion(int n, int total_steps ){
        
//         if( total_steps == n ){
//             res++;
//             return;
//         }
        
//         if( total_steps > n ){
//             return;
//         }
        
//         recursion( n, total_steps+1 );
//         recursion( n, total_steps+2 );
        
//     }
    
//RECURSION TOO COMPLEX, USE DP INSTEAD!!!
public:
    int climbStairs(int n) {
        
        vector<int> dp(n+1,0);
        dp[0] = 1;

        for(int i=1;i<n+1;i++){
            
            dp[i] = dp[i-1];
            if ( i > 1 ){
                dp[i] += dp[i-2];
            } 
        }
        return dp[n];
    }
};