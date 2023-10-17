class Solution {
private:
    vector<string> permutations;
    void permute(string s){
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                permutations.push_back( s.substr(i,j+1) );
            }
        }    
    }
    
public:
    int numTilePossibilities(string tiles) {
        string copy = tiles;
        next_permutation( tiles.begin(), tiles.end() );
            
        vector<string> total;
        total.push_back( copy );
        while( tiles != copy){
            total.push_back( tiles );
            next_permutation( tiles.begin(), tiles.end() );
        }
        
        for(int i=0;i<total.size();i++){
            permute( total[i] );
        }
        
        sort( permutations.begin(), permutations.end() );
        permutations.erase( unique( permutations.begin(), permutations.end() ), permutations.end() );
        
        return permutations.size();
    }
};