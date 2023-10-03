class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        vector<int> nums_copy = nums;
        sort( nums_copy.begin(), nums_copy.end() );
        nums_copy.erase( unique( nums_copy.begin(), nums_copy.end() ) , nums_copy.end() );
        
        for(int i=0;i<nums_copy.size();i++){
            cout << nums_copy[i] << " ";
        }
        
        vector<int> count_arr;
        int count = 0;
        int index = 0;
        
        for(int i=0;i<nums_copy.size();i++){
            for(int j=0;j<nums.size();j++){
                if( nums_copy[i] == nums[j] ){
                    count++;
                }
            }
            
            if( count == 1 ){
                index = i;
            }
            count = 0;
        }
        
        return nums_copy[index];
        
    }
};