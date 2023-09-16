class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        string word1_str = "";
        string word2_str = "";
        
        for(int i=0;i<word1.size();i++){
            word1_str = word1_str + word1[i];
        }
        
        for(int i=0;i<word2.size();i++){
            word2_str = word2_str + word2[i];
        }
        
        if( word1_str == word2_str ){
            return true;
        }
        
        return false;
        
    }
};