class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        vector<vector<int>> res;
        
        vector<int> copy = nums;
        res.push_back( nums );
        next_permutation( nums.begin(), nums.end() );
        
        while( nums != copy ){
            res.push_back( nums );
            next_permutation( nums.begin(), nums.end() );
        }
        
        return res;
        
    }
};