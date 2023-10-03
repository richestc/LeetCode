class Solution {
public:
    int reverse(int x) {
        
        bool negative = false;
        if( x < 0 ){
            negative = true;
        }
        
        string x_str = to_string( abs(x) );
        string x_str_rev = "";
        for(int i=0;i<x_str.size();i++){
            x_str_rev = x_str_rev + x_str[ x_str.size()-1 -i ];
        }
        
        if( stoll(x_str_rev) > 2147483647 || stoll(x_str_rev) < -2147483648 ){
            return 0;
        }
        
        if( negative == true ){
            return -1 * stoi(x_str_rev);
        }
        
        return stoi(x_str_rev);
        
    }
};