class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        vector<int> copy = arr;
        sort( copy.begin(), copy.end() );
        copy.erase( unique(copy.begin(), copy.end() ), copy.end() );
        
        unordered_map<int, int> map;
        for(int i=0;i<copy.size();i++){
            map[ copy[i] ] = i+1;
        }
        
        
        
        vector<int> res;
        for(int i=0;i<arr.size();i++){
            res.push_back( map[ arr[i] ] );    
        }
        
        return res;
    }
};