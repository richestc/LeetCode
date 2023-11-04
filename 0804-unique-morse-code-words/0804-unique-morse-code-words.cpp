class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        string alphabet = "abcdefghijklmnopqrstuvwxyz";
        unordered_map<char, string> map;
        
        for(int i=0;i<alphabet.size();i++){
            map[ alphabet[i] ] = morse[i];    
        }
        
        vector<string> res;
        string temp;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                temp = temp + map[ words[i][j] ];
            }
            res.push_back(temp);
            temp = "";
        }
        
        //print
        for(int i=0;i<morse.size();i++) cout << morse[i] << " ";
        
        sort(res.begin(), res.end());
        res.erase( unique(res.begin(),res.end()), res.end() );
        
        return res.size();
    }
};