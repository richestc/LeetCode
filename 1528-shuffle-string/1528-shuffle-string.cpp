class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        unordered_map<int, char> map;
        for(int i=0;i<s.size();i++){
            map[ indices[i] ] = s[i];
        }
        
        string res;
        for(int i=0;i<s.size();i++){
            res = res + map[i];
        }
        return res;
    }
};