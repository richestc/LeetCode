class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        
        if( original.size() != m*n ){
            return {};
        }
        
        vector<vector<int>> res;
        vector<int> temp;
        
        int k = 0;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                temp.push_back( original[k] );
                k++;
            }
            res.push_back( temp );
            temp.clear();
        }
        
        return res;
    }
};