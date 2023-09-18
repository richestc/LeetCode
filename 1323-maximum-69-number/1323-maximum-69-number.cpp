class Solution {
public:
    int maximum69Number (int num) {
        
        string str_num = to_string( num );
        
        string new_str = "";
        
        for(int i=0;i<str_num.size();i++){
            if( str_num[i] == '6' ){
                new_str = new_str + '9';
                break;
            }
            
            new_str = new_str + str_num[i];
        }
        
        for(int i=new_str.size();i<str_num.size();i++){
            new_str = new_str + str_num[i];
        }
        
        return stoi( new_str );
        
    }
};