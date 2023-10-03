class Solution {
public:
    bool judgeCircle(string moves) {
        
        int vertical_translation = 0;
        int horizontal_translation = 0;
        
        for(int i=0;i<moves.size();i++){
            if( moves[i] == 'U' ){
                vertical_translation++;
            }
            else if( moves[i] == 'D' ){
                vertical_translation--;
            }
            else if( moves[i] == 'R' ){
                horizontal_translation++;
            }
            else if( moves[i] == 'L' ){
                horizontal_translation--;
            }
        }
        
        if( ( vertical_translation == 0 ) && ( horizontal_translation == 0 ) ){
            return true;
        }
        
        return false;
    }
};