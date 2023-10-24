class Solution {
public:
    int lengthOfLastWord(string s) {
        
        reverse( s.begin(), s.end() );
        
        while( s[0] == ' ' ){
            s.erase( s.begin() );
        }
        
        int count = 0;
        for(int i=0;i<s.size();i++){
            if(( s[i] >= 'a' && s[i] <= 'z' ) || ( s[i] >= 'A' && s[i] <= 'Z' )){
                count++;
            }
            
            if( s[i] == ' ' ){
                break;
            }
        }
        
        return count;
    }
};