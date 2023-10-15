class Solution {
public:
    string reverseWords(string s) {
        
        string res = "";
        string temp = "";
        
        for(int i=0;i<s.size();i++){
            temp = s[i] + temp;
            
            if( s[i] == ' ' ){
                res = res + temp;
                temp = "";
            }
            
            if( i == s.size()-1 ){
                res = res + " " + temp;
            }
            
        }
        
        return res.substr( 1, res.size() );
    }
};