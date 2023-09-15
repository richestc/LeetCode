class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        
        vector<int> res;
        
        int count = 0;
        
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                
                if(i < j){
                    count = count + nums[j];
                }
                else if( i == j ){
                    count = count + 0;
                }
                else{
                    count = count - nums[j];
                }
                
            }
            res.push_back( abs(count) );
            count = 0;
        }
        
        return res;
    }
};