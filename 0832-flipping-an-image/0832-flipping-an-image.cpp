class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        vector<vector<int>> res;
        vector<int> temp;
        
        for(int i=0;i<image.size();i++){
            for(int j=0;j<image[0].size();j++){
                
                if( image[i][j] == 0 ){
                    temp.push_back( 1 );
                }
                else{
                    temp.push_back( 0 );
                }
                
            }
            reverse( temp.begin(), temp.end() );
            res.push_back( temp );
            temp.clear();
        }
       
        return res;
    }
};