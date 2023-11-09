class Solution {
public:
    bool checkZeroOnes(string s) {
        
        int o = 0;          int z = 0;
        vector<int> ones;   vector<int> zeroes;
        
        for(int i=0;i<s.size();i++){
            if( s[i] == '1' ){
                o++;
                zeroes.push_back(z);
                z = 0;
            }
            else{
                z++;
                ones.push_back(o);
                o = 0;
            }
            
            if( i == s.size()-1 )   ones.push_back(o);  zeroes.push_back(z);
        }
        
        //print
        for(int i=0;i<ones.size();i++)  cout << ones[i] << " ";
        cout << endl;
        for(int i=0;i<zeroes.size();i++)    cout << zeroes[i] << " ";
        
        return ( *max_element(ones.begin(), ones.end()) > *max_element(zeroes.begin(), zeroes.end()) );
    }
};