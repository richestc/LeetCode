class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        //ch isn't in word
        bool exist = false;
        for(int i=0;i<word.size();i++){
            if( word[i] == ch ){
                exist = true;
            }
        }
        
        if( exist == false ){
            return word;
        }
        
        
        string res = "";
        
        for(int i=0;i<word.size();i++){
            res = res + word[i];
            
            if( word[i] == ch ){
                break;
            }
        }
        
        reverse( res.begin(), res.end() );
        
        for(int i=res.size();i<word.size();i++){
            res = res + word[i];
        }
        
        return res;
    }
};