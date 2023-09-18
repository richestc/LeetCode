class Solution {
private:
    int sum_int(int n){
        int res = 0;
        
        for(int i=1;i<=n;i++){
            res = res + i;
        }
        
        return res;
    }
    
public:
    int pivotInteger(int n) {
        
        int total_sum = sum_int( n );
        
        for(int i=1;i<=n;i++){
            if( sum_int(i) == total_sum - sum_int( i-1 ) ){
                return i;
            }
        }
        
        
        return -1;
    }
};