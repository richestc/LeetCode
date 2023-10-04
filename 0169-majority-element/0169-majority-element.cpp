class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int res = 0;
        
        int count = 0;
        
        vector<int> existed = nums;
        sort( existed.begin(), existed.end() );
        existed.erase( unique( existed.begin(), existed.end() ) , existed.end() );
        
        for(int i=0;i<existed.size();i++){
            for(int j=0;j<nums.size();j++){
                if( existed[i] == nums[j] ){
                    count++;
                }
                
                if( nums.size() % 2 == 1 ){
                    if( count >= nums.size() / 2 +1 ){
                        res = existed[i];
                        break;
                    }
                }
                else{
                    if( count >= nums.size() / 2 ){
                        res = existed[i];
                        break;
                    }   
                }
              
            }
            
            count = 0;
        }
        
        return res;
    }
};