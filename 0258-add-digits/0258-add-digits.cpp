class Solution {
private:
    string breakdown(string s){
        int sum = 0;
        for(int i=0;i<s.size();i++){
            sum = sum + (s[i] - '0');
        }
        return to_string(sum);
    }
    
public:
    int addDigits(int num) {
        
        string s = to_string(num);
        
        string temp = s;
        
        while( temp.size() > 1 ){
            temp = breakdown( temp );
        }
        
        return stoi(temp);
    }
};