class Solution {
private:
    bool checker(int num){
        string num_str = to_string( num );
        if( num_str.size() % 2 == 1 ){
            return false;
        }
        
        int mid = num_str.size() / 2;
        
        int left = 0;
        int right = 0;
        
        for(int i=0;i<mid;i++){
            left = left + (num_str[i] - '0');
        }
        for(int i=mid;i<num_str.size();i++){
            right = right + (num_str[i] - '0');
        }
        
        if( left == right ){
            return true;
        }
        
        return false;
        
    }
    
public:
    int countSymmetricIntegers(int low, int high) {
        
        int res = 0;
        
        for(int i=low;i<=high;i++){
            if( checker(i) == true ){
                res++;
            }
        }
        
        return res;
    }
};