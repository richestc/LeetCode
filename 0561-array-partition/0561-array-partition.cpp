class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        
        int res = 0;
        
        sort( nums.begin(), nums.end() );
        
        for(int i=0;i<nums.size();i++){
            if( i % 2 == 0 ){
                res = res + nums[i];
            }
        }
        
        return res;
        
    }
};