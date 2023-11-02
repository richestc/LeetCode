class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        int m = *max_element(nums.begin(),nums.end());

        vector<int> cmap( m+1, 0 );
        
        for(int i=0;i<nums.size();i++){
            cmap[ nums[i] ]++;
        }

        int sum = 0;
        for(int i=0;i<cmap.size();i++){
            if( cmap[i] == 1 )  sum = sum + i;
        }
        
        return sum;
    }
};