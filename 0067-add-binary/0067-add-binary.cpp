class Solution {
public:
    string addBinary(string a, string b) {
        
        string res = "";
        
        if( a.size() > b.size() ){   
            int diff = a.size() - b.size();
            
            for(int i=0;i<diff;i++){
                b = "0" + b;
            }
            
        }
        else{
            int diff = b.size() - a.size();
            
            for(int i=0;i<diff;i++){
                a = "0" + a;
            }
        }
        
        int carry = 0;
        
        for(int i=a.size()-1;i>=0;i--){
            
            int index_sum = ( a[i] - '0' ) + ( b[i] - '0' ) + carry;
            carry = index_sum / 2;
            res = res + to_string( index_sum % 2 );
            
        }
        
        
        if( carry > 0 ){
            res = res + to_string(carry);
        }
        
        reverse( res.begin(), res.end() );
        
        return res;
        
    }
};