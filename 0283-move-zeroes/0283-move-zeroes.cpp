class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        vector<int> res;
        
        for(int i=0;i<nums.size();i++){
            if( nums[i] != 0 ){
                res.push_back( nums[i] );
            }
        }
        
        for(int i=res.size();i<nums.size();i++){
            res.push_back( 0 );
        }
        
        nums = res;
    }
};