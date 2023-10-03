class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        
        string first_chars = "";
        for(int i=0;i<words.size();i++){
            first_chars = first_chars + words[i][0];
        }
        
        if( first_chars == s ){
            return true;
        }
        return false;
        
    }
};