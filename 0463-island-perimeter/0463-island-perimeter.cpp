class Solution {
private:
    int count(vector<vector<int>>& grid, int i, int j){
        int res = 4;
        
        if( i-1 >= 0 ){
            if( grid[i-1][j] == 1 ){
                res--;
            }
        }
        
        if( i+1 <= grid.size()-1 ){
            if( grid[i+1][j] == 1 ){
                res--;
            }
        }
        
        if( j-1 >= 0 ){
            if( grid[i][j-1] == 1 ){
                res--;
            }
        }
        
        if( j+1 <= grid[0].size()-1 ){
            if( grid[i][j+1] == 1 ){
                res--;
            }
        }
        
        return res;
    }
    
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int res = 0;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if( grid[i][j] == 1 ){
                    res = res + count(grid, i, j);
                }
            }
        }
        
        return res;
    }
};