class Solution {
private:
    vector<int> res;
    void calc(string s){
        
        for(int i=0;i<s.size()-1;i++){
            string n1 = s.substr(0, i+1);
            string n2 = s.substr(i+1,s.size());
            
            res.push_back( stoi(n1) + stoi(n2) );
        }
        
    }
    
public:
    int splitNum(int num) {
        
        string s = to_string(num);
        string copy = s;
        next_permutation( s.begin(), s.end() );
        
        vector<string> perm;
        perm.push_back(s);
        
        while( copy != s ){
            next_permutation( s.begin(), s.end() );
            perm.push_back(s);
        }
        
        
        for(int i=0;i<perm.size();i++){
            calc( perm[i] );
        }
        
        return *min_element( res.begin(), res.end() );
    }
};