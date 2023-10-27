class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        vector<long long> v;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    
                    if( i < j < k ){
                        
                        v.push_back( (long long) (nums[i] - nums[j])*nums[k] );
                        
                    }
                    
                }
            }
        }
        long long res = *max_element( v.begin(), v.end() );
        if( res < 0 )   return 0;
        return res;
    }
};