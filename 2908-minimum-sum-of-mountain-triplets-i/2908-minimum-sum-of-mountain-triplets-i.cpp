class Solution {
public:
    int minimumSum(vector<int>& nums) {
        
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    
                    if( i < j < k ){
                        
                        if(( nums[i] < nums[j] ) && ( nums[k] < nums[j] )){
                            v.push_back( nums[i] + nums[j] + nums[k] );
                        }
                        
                    }
                    
                }
            }
        }
        
        if( v.empty() )     return -1;
        
        return *min_element( v.begin(), v.end() );
    }
};