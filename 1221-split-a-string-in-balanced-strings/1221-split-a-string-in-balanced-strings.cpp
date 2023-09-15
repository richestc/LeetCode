class Solution {
private:
    bool check_balance(string s){
        int left_count = 0;
        int right_count = 0;
        
        for(int i=0;i<s.size();i++){
            if( s[i] == 'L' ){
                left_count++;
            }
            else{
                right_count++;
            }
        }
        
        if( left_count == right_count ){
            return true;
        }
        
        return false;
    }
    
public:
    int balancedStringSplit(string s) {
        
        int res = 0;
        
        string temp = "";
        
        for(int i=0;i<s.size();i++){
            temp = s.substr( 0, i+1 );
            
            if( check_balance(temp) == true ){
                res++;
            }
            
        }
        
        return res;
    }
};