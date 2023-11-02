class Solution {
private:
    string transform(string s){
        int total = 0;
        for(int i=0;i<s.size();i++){
            total = total + ( s[i] - '0' );
        }
        return to_string(total);
    }
    
public:
    int getLucky(string s, int k) {
        
        unordered_map< char, int > map;
        string alphabet = "abcdefghijklmnopqrstuvwxyz";
        for(int i=0;i<alphabet.size();i++){
            map[ alphabet[i] ] = i+1;
        }
        
        string res;
        for(int i=0;i<s.size();i++){
            res = res + to_string( map[ s[i] ] );
        }
        
        string temp = res;
        for(int i=0;i<k;i++){
            temp = transform( temp );
        }
        
        return stoi(temp);
    }
};