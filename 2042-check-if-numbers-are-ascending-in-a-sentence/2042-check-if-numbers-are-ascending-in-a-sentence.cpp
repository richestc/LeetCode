class Solution {
public:
    bool areNumbersAscending(string s) {
        
        string s1 = "";
        for(int i=0;i<s.size();i++){
            if( ( s[i] >= '0' && s[i] <= '9' ) || s[i] == ' ' ){
                s1 = s1 + s[i];
            }
        }
        
        vector<int> s_v;
        string temp = "";
        for(int i=0;i<s1.size();i++){
            if( s1[i] >= '0' && s1[i] <= '9' ){
                temp = temp + s1[i];
            }
            
            if( s1[i] == ' ' && temp.size() > 0 ){
                s_v.push_back( stoi(temp) );
                temp = "";
            }
            
            if(( s1[i] >= '0' && s1[i] <= '9') && ( i == s1.size()-1 )){
                s_v.push_back( stoi(temp) );
            }
        }
        
        for(int i=0;i<s_v.size()-1;i++){
            if( s_v[i+1] <= s_v[i] ){
                return false;
            }
        }
        
        return true;
    }
};