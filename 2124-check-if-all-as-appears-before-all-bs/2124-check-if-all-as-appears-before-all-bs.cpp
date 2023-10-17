class Solution {
public:
    bool checkString(string s) {
        
        int a_location = -1;
        int b_location = -1;
        for(int i=0;i<s.size();i++){
            if( s[i] == 'b' ){
                b_location = i;
                break;
            }
        }
        
        for(int i=s.size()-1;i>=0;i--){
            if( s[i] == 'a' ){
                a_location = i;
                break;
            }
        }
        
        if( a_location == -1 || b_location == -1 ){
            return true;
        }
        
        if( a_location > b_location ){
            return false;
        }
        return true;
        
    }
};