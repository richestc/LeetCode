class Solution {
public:
    string toLowerCase(string s) {
        
        string res;
        
        for(int i=0;i<s.size();i++){
            
            if( s[i] >= 'A' && s[i] <= 'Z' ){
                s[i] = s[i] + ' ';
                res = res + s[i];
            }
            else{
                res = res + s[i];
            }
            
        }
        
        return res;
    }
};