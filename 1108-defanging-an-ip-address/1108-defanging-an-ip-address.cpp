class Solution {
public:
    string defangIPaddr(string address) {
        
        string res = "";
        
        for(int i=0;i<address.size();i++){
            
            if( address[i] == '.' ){
                res = res + "[.]";
            }
            else{
                res = res + address[i];
            }
            
        }
        
        return res;
    }
};