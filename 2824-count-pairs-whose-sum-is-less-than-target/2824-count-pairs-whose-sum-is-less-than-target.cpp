class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        
        int res = 0;
        
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if( i != j ){
                    if( (i < j) && (nums[i] + nums[j] < target) ){
                        res++;
                    }
                }
            }
        }
        
        return res;
        
    }
};