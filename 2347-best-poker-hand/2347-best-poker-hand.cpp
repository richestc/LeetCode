class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        
        //check flush
        vector<char> s2 = suits;
        sort(s2.begin(), s2.end());
        s2.erase( unique(s2.begin(), s2.end()), s2.end() );
        if( s2.size() <= 1 )    return "Flush";
        
        //check three of a kind
        int m = *max_element(ranks.begin(), ranks.end());
        vector<int> bmap (m+1, 0);
        for(int i=0;i<ranks.size();i++){
            bmap[ ranks[i] ]++;
        }
        if( *max_element(bmap.begin(), bmap.end()) >= 3 )   return "Three of a Kind";
        
        //check pair
        if( *max_element(bmap.begin(), bmap.end()) >= 2 )   return "Pair";
        
        //check high card
        return "High Card";
    }
};