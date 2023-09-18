class Solution {
private:
    
    int reverser(int number){
        
        string number_str = to_string( number );
        reverse( number_str.begin(), number_str.end() );
        return stoi( number_str );
        
    }
    
public:
    bool sumOfNumberAndReverse(int num) {
        
        for(int i=0;i<=num;i++){
            
            if( i + reverser( i ) == num ){
                return true;
            }
            
        }
        
        return false;
    }
};