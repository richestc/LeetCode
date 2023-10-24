class Solution {
public:
    string decodeMessage(string key, string message) {
    
        while( key[0] == ' ' ){
            key.erase( key.begin() ); 
        }
        
        string v;
        v.push_back(key[0]);
        
        for(int i=0;i<key.size();i++){
            
            if( key[i] >= 'a' && key[i] <= 'z' ){
                
                for(int j=0;j<v.size();j++){
                    
                    if( key[i] == v[j] )     break;
                    if( j == v.size()-1 )    v.push_back( key[i] );
                    
                }
                
            }
            
            if( v.size() >= 26 )     break;
        }
           
        //IMPORTANT!
        unordered_map<char,char> map;
        string alphabet = "abcdefghijklmnopqrstuvwxyz";
        
        for(int i=0;i<v.size();i++){
            map[ v[i] ] = alphabet[i];
        }
        
        cout << v << endl;
        cout << map.size();
        
        string res;
        for(int i=0;i<message.size();i++){
            if( message[i] != ' ' )     res = res + map[ message[i] ];
            else                        res = res + message[i];
        }
        
        
        return res;
    }
};