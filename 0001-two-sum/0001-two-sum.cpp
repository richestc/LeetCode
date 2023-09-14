class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> res;
        
        bool exists1 = false;
        bool exists2 = false;
        
        for(int i=0;i<nums.size();i++){
            
            for(int j=0;j<nums.size();j++){
                
                if( i != j ){
                    
                    if( nums[i] + nums[j] == target ){
                        
                        for(int k=0;k<res.size();k++){
                            if( res[k] == i ){
                                exists1 = true;
                            }
                            
                            if( res[k] == j ){
                                exists2 = true;
                            }
                        }
                        
                        if( exists1 == false ){
                            res.push_back(i);
                        }
                        
                        if( exists2 == false ){
                            res.push_back(j);
                        }
                        
                        exists1 = false;
                        exists2 = false;
                        
                    }
                }
                
            }
            
        }
        
        sort( res.begin(), res.end() );
        
        return res;
        
    }
};