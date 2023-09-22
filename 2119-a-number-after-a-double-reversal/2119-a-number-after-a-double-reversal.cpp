class Solution {
public:
    bool isSameAfterReversals(int num) {
        
        string num_str = to_string( num );
        
        string first_rev;
        int j = num_str.size()-1;
        for(int i=0;i<num_str.size();i++){
            first_rev = first_rev + num_str[j];
            j--;
        }
        
        int count = 0;
        while( first_rev[count] == '0' ){
            count++;
        }
        string filter_zero;
        for(int i=count;i<num_str.size();i++){
            filter_zero = filter_zero + first_rev[i];
        }
        
        string second_rev;
        j = filter_zero.size()-1;
        for(int i=0;i<filter_zero.size();i++){
            second_rev = second_rev + filter_zero[j];
            j--;
        }
        
        if( num == 0 ){
            return true;
        }
        
        if( second_rev == num_str ){
            return true;
        }
        
        return false;
        
    }
};