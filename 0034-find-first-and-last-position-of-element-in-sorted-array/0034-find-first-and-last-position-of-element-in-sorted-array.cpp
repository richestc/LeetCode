class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> options;
        vector<int> res;
        
        for(int i=0;i<nums.size();i++){
            if( nums[i] == target ){
                options.push_back( i );
            }
        }
        
        if( options.empty() ){
            res.push_back( -1 );
            res.push_back( -1 );
        }
        else{
            res.push_back( *min_element( options.begin(), options.end() ));
            res.push_back( *max_element( options.begin(), options.end() ));
        }
        
        return res;
        
    }
};