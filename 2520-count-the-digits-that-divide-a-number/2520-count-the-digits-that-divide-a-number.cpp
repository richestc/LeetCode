class Solution {
public:
    int countDigits(int num) {
        
        int res = 0;
        
        string num_str = to_string(num);
        
        for(int i=0;i<num_str.size();i++){
            if( num % (num_str[i] - '0') == 0 ){
                res++;
            }
        }
        
        return res;
    }
};