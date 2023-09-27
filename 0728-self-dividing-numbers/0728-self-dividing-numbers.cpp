class Solution {
private:
    bool checker(int num){
        string num_str = "";
        num_str = to_string(num);
        
        for(int i=0;i<num_str.size();i++){
            if( ( num_str[i] - '0' ) == 0 ){
                return false;
            }   
        }
        
        for(int i=0;i<num_str.size();i++){
            if( ( num_str[i] - '0' ) != 0 ){
                if( num % ( num_str[i] - '0' ) != 0 ){
                    return false;
                }
            }
        }
        
        return true;
    }
    
public:
    vector<int> selfDividingNumbers(int left, int right) {
     
        vector<int> res;
        
        for(int i=left;i<=right;i++){
            if( checker( i ) == true ){
                res.push_back( i );
            }
        }
        
        return res;
    }
};