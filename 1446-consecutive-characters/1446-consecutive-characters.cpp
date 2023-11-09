class Solution {
public:
    int maxPower(string s) {
        
        vector<int> v;
        v.push_back(0);
        for(int i=0;i<s.size()-1;i++){
            if( s[i] != s[i+1] )    v.push_back( i+1 );    
        }
        v.push_back( s.size() );
        
        //error case
        if( v.size() <= 1 ) return s.size();
        
        vector<int> diff;
        for(int i=1;i<v.size();i++){
            diff.push_back( v[i] - v[i-1] );
        }
        
        //print
        for(int i=0;i<v.size();i++) cout << v[i] << " ";
        cout << endl;
        for(int i=0;i<diff.size();i++) cout << diff[i] << " ";
        
        return *max_element( diff.begin(), diff.end() );
    }
};