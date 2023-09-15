class Solution {
public:
    int minimizedStringLength(string s) {
        
        string res;
        
        vector<char> existed;
        existed.push_back( s[0] );
        bool add = true;
        
        for(int i=0;i<s.size();i++){
            for(int j=0;j<existed.size();j++){
                
                if( s[i] == existed[j] ){
                    add = false;
                }
                
            }
            
            if( add == true ){
                existed.push_back( s[i] );
            }
            
            add = true;
        }
        
        return existed.size();
    }
};