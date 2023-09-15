class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int> first_half;
        vector<int> second_half;
        
        for(int i=0;i<n;i++){
            first_half.push_back( nums[i] );
        }
        
        for(int i=n;i<nums.size();i++){
            second_half.push_back( nums[i] );
        }
        
        vector<int> res;
        for(int i=0;i<n;i++){
            res.push_back( first_half[i] );
            res.push_back( second_half[i] );
        }
        
        
        return res;
    }
};