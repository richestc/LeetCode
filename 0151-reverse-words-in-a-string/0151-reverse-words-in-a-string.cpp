class Solution {
public:
    string reverseWords(string s) {
        
        vector<string> words;
        string temp;
        for(int i=0;i<s.size();i++){
            if(( s[i] >= 'a' && s[i] <= 'z' ) || ( s[i] >= 'A' && s[i] <= 'Z' ) || ( s[i] >= '0' && s[i] <= '9' ) ){
                temp = temp + s[i];
            }
            
            if( temp.size() > 0 && s[i] == ' ' ){
                words.push_back( temp );
                temp = "";
            }
        }
        words.push_back( temp );
        
        reverse( words.begin(), words.end() );
        
        string res;
        for(int i=0;i<words.size();i++){
            res = res + words[i];
            
            if( i != words.size()-1 ){
                res = res + " ";
            }
            
        }
        
        int blank = 0;
        for(int i=0;i<res.size();i++){
            if( res[i] == ' ' ){
                blank++;
            }
            else{
                break;
            }
        }
        int blank2 = 0;
        for(int i=res.size()-1;i>=0;i--){
            if( res[i] == ' ' ){
                blank2++;
            }
            else{
                break;
            }
        }
        
        
        
        //print
        for(int i=0;i<words.size();i++){
            cout << words[i] << " ";
        }
        
        return res.substr( blank, res.size()-blank2 );
        
    }
};