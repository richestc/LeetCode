class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        
        int element_sum = 0;
        int digit_sum = 0;
        
        for(int i=0;i<nums.size();i++){
            element_sum = element_sum + nums[i];
        }
        
        string nums_str = "";
        for(int i=0;i<nums.size();i++){
                nums_str = nums_str + to_string( nums[i] );
        }
        
        for(int i=0;i<nums_str.size();i++){
            digit_sum = digit_sum + ( nums_str[i] - '0' );
        }
        
        return abs( element_sum - digit_sum );
        
    }
};