class Solution {
public:
    bool checkPerfectNumber(int num) {
        
        int total = 0;
        
        for(int i=1;i<=num-1;i++){
            if( num % i == 0 ){
                total = total + i;
            }
        }
        
        if( total == num ){
            return true;
        }
        
        return false;
        
    }
};