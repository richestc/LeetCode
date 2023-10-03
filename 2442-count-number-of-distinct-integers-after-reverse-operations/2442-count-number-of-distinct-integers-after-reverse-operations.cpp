class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        
        vector<int> all_nums = nums;
        
        for(int i=0;i<nums.size();i++){
            
            string temp_str = to_string ( nums[i] );
            reverse( temp_str.begin(), temp_str.end() );
            all_nums.push_back( stoi(temp_str) );
            
        }
        
        sort( all_nums.begin(), all_nums.end() );
        all_nums.erase( unique( all_nums.begin(), all_nums.end() ) , all_nums.end() );
        
        return all_nums.size();
    }
};