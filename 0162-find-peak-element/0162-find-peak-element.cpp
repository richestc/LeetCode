class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        return distance( nums.begin(), max_element(nums.begin(),nums.end()) );
        
    }
};