class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
    
        
        vector<string> v;
        for(int i=0;i<= 100001 ;i++){
            v.push_back("");
        }
        
        for(int i=0;i<heights.size();i++){
            v[ heights[i] ] = names[i];
        }
        reverse( v.begin(), v.end() );
        v.erase( remove( v.begin(), v.end(), "" ), v.end() );
        
        return v;
        
    }
};