class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        vector<int> res;
        
        int count = 0;
        
        for(int i=0;i<nums.size();i++){
            count = count + nums[i];
            res.push_back( count );
        }
        
        return res;
    }
};