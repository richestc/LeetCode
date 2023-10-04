class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        
        vector<int> existed;
        for(int i=0;i<nums.size();i++){
            if( nums[i] % 2 == 0 ){
                existed.push_back( nums[i] );
            }
        }
        
        // all odd numbers
        if( existed.empty() ){
            return -1;
        }
        
        sort( existed.begin(), existed.end() );
        existed.erase( unique( existed.begin(), existed.end() ), existed.end() );
        
        vector<int> res;
        int count = 0;
        for(int i=0;i<existed.size();i++){
            for(int j=0;j<nums.size();j++){
                
                if( existed[i] == nums[j] ){
                    count++;
                }
                
            }
            res.push_back( count );
            count = 0;
        }
        
        for(int i=0;i<existed.size();i++){
            cout << existed[i] << " ";
        }
        
        return existed[ distance( res.begin(), max_element( res.begin(), res.end() ) ) ];
        
    }
};