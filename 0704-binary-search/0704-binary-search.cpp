class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int start = 0;    int end = nums.size()-1;
        
        while( start <= end ){
            
            int mid = floor( (start+end) /2 );
            
            if( nums[mid] < target ){
                start = mid+1;
                end = end;
            }
            
            if( nums[mid] > target ){
                start = start;
                end = mid-1;
            }
            
            if( nums[mid] == target )   return mid;
            
        }
        
        return -1;
    }
};