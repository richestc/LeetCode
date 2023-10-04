class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> existed = nums;
        sort( existed.begin(), existed.end() );
        existed.erase( unique( existed.begin(), existed.end() ), existed.end() );
        
        vector<int> counters;
        int count = 0;
        
        for(int i=0;i<existed.size();i++){
            for(int j=0;j<nums.size();j++){
                
                if( existed[i] == nums[j] ){
                    count++;
                }
                
            }
            counters.push_back( count );
            count = 0;
        }
        
        for(int i=0;i<counters.size();i++){
            cout << counters[i] << " ";
        }
        
        vector<int> res;
        
        for(int i=0;i<k;i++){
            res.push_back( existed[ distance( counters.begin(), max_element( counters.begin(), counters.end() ) ) ] );
            counters[distance( counters.begin(), max_element( counters.begin(), counters.end() ) )] = 0;
        }
        
        sort( res.begin(), res.end() );
        
        return res;
        
    }
};