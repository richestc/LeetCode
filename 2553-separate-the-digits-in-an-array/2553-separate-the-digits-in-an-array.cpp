class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        
        string nums_str = "";
        for(int i=0;i<nums.size();i++){
            nums_str = nums_str + to_string( nums[i] ); 
        }
        
        vector<int> res;
        for(int i=0;i<nums_str.size();i++){
            res.push_back( ( nums_str[i] - '0' ) );
        }
        
        return res;
        
    }
};