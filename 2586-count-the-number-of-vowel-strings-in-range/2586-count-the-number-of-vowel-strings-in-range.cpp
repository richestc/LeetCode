class Solution {
private:
    bool is_vowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            return true;
        }   
        return false;
    }
    
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        
        int count = 0;
        
        for(int i=left;i<=right;i++){
            
            if( ( is_vowel(words[i][0]) == true ) && ( is_vowel(words[i][ words[i].size()-1 ]) == true ) ){
                count++;
                
            }
            
        }
        
        return count;
    }
};