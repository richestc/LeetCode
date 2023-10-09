class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        
        sort( satisfaction.begin(), satisfaction.end() );
        
        if( satisfaction[ satisfaction.size() -1 ] < 0 ){
            return 0;
        }
        
        vector<int> res;

        int sum = 0;
        int k = 1;
        for(int i=0;i<satisfaction.size();i++){
            
            for(int j= satisfaction.size()-i-1;j<satisfaction.size();j++){
                sum = sum + k*satisfaction[j];
                k++;
                
            }
            res.push_back( sum );
            
            sum = 0;
            k = 1;
            
        }
        
        
        return *max_element( res.begin(), res.end() );
    }
};