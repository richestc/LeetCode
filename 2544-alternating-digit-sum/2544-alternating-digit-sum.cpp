class Solution {
public:
    int alternateDigitSum(int n) {
        
        string n_str = to_string(n);
        
        int res = 0;
        
        for(int i=0;i<n_str.size();i++){
            if( i % 2 == 0 ){
                res = res + ( n_str[i] - '0' );
            }
            else{
                res = res - ( n_str[i] - '0' );
            }
        }
        
        return res;
    }
};