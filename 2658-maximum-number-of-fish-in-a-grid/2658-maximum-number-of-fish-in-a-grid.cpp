class Solution {
public:
    //AMPERSANDS ARE IMPORTANT!!! ???
    void solve(int i,int j,int &sum,int &ans,vector<vector<int>> &g){
        ans = max(ans,sum);
        if(i<0||j<0||i>=g.size()||j>=g[0].size()||g[i][j]==0){
            return;
        }
        
        sum += g[i][j];
        g[i][j] = 0;
        
        solve(i+1,j,sum,ans,g);
        solve(i,j+1,sum,ans,g);
        solve(i-1,j,sum,ans,g);
        solve(i,j-1,sum,ans,g);
    }
    int findMaxFish(vector<vector<int>>& grid) {
        int ans = 0;
        int sum = 0;
        
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j]){
                    sum = 0;
                    solve(i,j,sum,ans,grid);
                }
            }
        }
        return ans;
    }
};