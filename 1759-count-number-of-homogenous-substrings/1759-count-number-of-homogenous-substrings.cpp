class Solution {
private:
    long sum(int x){
        long ans = 0;
        for(int i=1;i<=x;i++)   ans = ans + i;
        return (long) ans;
    }
    
public:
    int countHomogenous(string s) {
        
        vector<int> v;
        v.push_back(0);
        for(int i=0;i<s.size()-1;i++){
            if( s[i] != s[i+1] )    v.push_back(i+1);
        }
        v.push_back( s.size() );
        
        vector<int> diff;
        for(int i=1;i<v.size();i++) diff.push_back( v[i] - v[i-1] );
        
        long ans = 0;
        for(int i=0;i<diff.size();i++)  ans = ans + sum( diff[i] );
        
        return (long) ans % (1000000007);
    }
};