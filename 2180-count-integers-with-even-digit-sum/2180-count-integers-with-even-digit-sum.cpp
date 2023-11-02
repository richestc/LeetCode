class Solution {
private:
    bool breakdown(string s){
        int total = 0;
        for(int i=0;i<s.size();i++){
            total = total + ( s[i] - '0' );
        }
        
        if( total % 2 == 0 )    return true;
        return false;
    }
    
public:
    int countEven(int num) {
        
        int count = 0;
        for(int i=1;i<=num;i++){
            count = count + breakdown( to_string(i) );
        }
        return count;
    }
};