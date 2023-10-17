class Solution {
public:
    string sortSentence(string s) {

        vector<string> s_v;
        string temp = "";

        for(int i=0;i<s.size();i++){
            
            if( s[i] == ' ' ){
                s_v.push_back( temp );
                temp = "";
                i++; //the trick...
            }
            temp = temp + s[i];
            
            if( i == s.size()-1 ){
                s_v.push_back( temp );
            }
            
        }
        
        string res = "";
        for(int i=1;i<=s_v.size();i++){
            for(int j=0;j<s_v.size();j++){
                
                if( ( s_v[j][ s_v[j].size()-1 ] - '0' ) == i ){
                    res = res + s_v[j].substr( 0, s_v[j].size()-1 ) + " ";
                    break;
                }
                    
            }
        }
        
        return res.substr( 0, res.size()-1 );
    }
};