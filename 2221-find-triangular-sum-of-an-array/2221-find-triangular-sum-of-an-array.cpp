class Solution {
private:
    int res = 0;
    
    int triangle(int x, int y){
        return (x + y) % 10;
    }
    
    void recursion(vector<int>& nums){
        
        if( nums.size() <= 1 ){
            res = nums[0];
            return;
        }
        
        vector<int> update_nums;
        for(int i=0;i<nums.size()-1;i++){
            update_nums.push_back( triangle( nums[i], nums[i+1] ) );
        }
        
        recursion( update_nums );
        
    }
    
public:
    int triangularSum(vector<int>& nums) {
        
        recursion( nums );
        
        return res;
    }
};