class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        vector<int> nums2 = nums;
        sort( nums2.begin(), nums2.end() );
        nums2.erase( unique( nums2.begin(), nums2.end() ), nums2.end() );
        
        
        if( nums2.size() == nums.size() ){
            return false;
        }
        
        return true;
        
    }
};