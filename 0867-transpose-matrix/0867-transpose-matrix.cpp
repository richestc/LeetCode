class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        vector<vector<int>> res;
        vector<int> temp;
        
        for(int i=0;i<matrix[0].size();i++){
            for(int j=0;j<matrix.size();j++){
                
                temp.push_back( matrix[j][i] );
                
            }
            res.push_back(temp);
            temp.clear();
        }
        
        return res;
        
    }
};