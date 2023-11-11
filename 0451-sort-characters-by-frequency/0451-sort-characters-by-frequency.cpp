class Solution {
public:
    string frequencySort(string s) {
        
        string lower = "abcdefghijklmnopqrstuvwxyz";
        string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string digits = "0123456789";
        
        unordered_map< char, int > map;
        for(int i=0;i<lower.size();i++)     map[i] = 0;
        for(int i=0;i<upper.size();i++)     map[i] = 0;
        for(int i=0;i<digits.size();i++)    map[i] = 0;
        
        //calc
        for(int i=0;i<s.size();i++){
            map[ s[i] ]++;
        }
        
        vector<string> res;
        for(int i=0;i<lower.size();i++){
            if( map[ lower[i] ] > 0 )    res.push_back( std::string( map[ lower[i] ], lower[i] ) );
        }
        for(int i=0;i<upper.size();i++){
            if( map[ upper[i] ] > 0 )    res.push_back( std::string( map[ upper[i] ], upper[i] ) );
        }
        for(int i=0;i<digits.size();i++){
            if( map[ digits[i] ] > 0 )    res.push_back( std::string( map[ digits[i] ], digits[i] ) );
        }
        
        //important 
        sort( res.begin(), res.end(),
                   [](const std::string &a, const std::string &b) {
          return a.length() < b.length();
        });
        reverse( res.begin(), res.end() );
        
        string ans;
        for(int i=0;i<res.size();i++)   ans = ans + res[i];
        
        
        //print
        for(int i=0;i<lower.size();i++) cout << map[ lower[i] ];
        cout << " ";
        for(int i=0;i<upper.size();i++) cout << map[ upper[i] ];
        cout << " ";
        for(int i=0;i<digits.size();i++) cout << map[ digits[i] ];
    
        return ans;
    }
};