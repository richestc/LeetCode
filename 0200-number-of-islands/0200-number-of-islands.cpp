class Solution {
private:
    void recursion(vector<vector<char>>& grid, int i, int j){
        
        if( i < 0 || i > grid.size()-1 || j < 0 || j > grid[0].size()-1 ){
            return;
        }
        if( grid[i][j] == '0' ){
            return;
        }
        
        if( grid[i][j] == '1' ){
            grid[i][j] = '0';
            
            recursion( grid, i+1, j );
            recursion( grid, i-1, j );
            recursion( grid, i, j+1 );
            recursion( grid, i, j-1 );
        }
        
        //return;
    }
        
public:
    int numIslands(vector<vector<char>>& grid) {
        int res = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                
                if( grid[i][j] == '1' ){
                    res++;
                    recursion( grid, i+1, j );
                    recursion( grid, i-1, j );
                    recursion( grid, i, j+1 );
                    recursion( grid, i, j-1 );
                }
                
            }
        }
        
        return res;
    }
};