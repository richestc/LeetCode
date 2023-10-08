class Solution { 
private:
    int factorial(int n){
        if(n <= 1){
            return 1;
        }    
        
        return factorial(n-1)*n;
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> res;
        res.push_back( nums );
        
        for(int i=0;i< factorial( nums.size() )-1 ;i++){
            next_permutation( nums.begin(), nums.end() );
            res.push_back( nums );
        }
        
        return res;
        
    }
};