class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        
        int lefts = 0;
        int rights = 0;
        int underscores = 0;
        
        for(int i=0;i<moves.size();i++){
            if( moves[i] == 'L' ){
                lefts++;
            }
            else if( moves[i] == 'R' ){
                rights++;
            }
            else if( moves[i] == '_' ){
                underscores++;
            }
        }
        
        if( lefts >= rights ){
            return lefts + underscores - rights;
        }
        
        return rights + underscores - lefts;
        
    }
};