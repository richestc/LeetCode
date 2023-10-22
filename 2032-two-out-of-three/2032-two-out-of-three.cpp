class Solution {
private:
    vector<int> compare(vector<int>& v1, vector<int>& v2){
        
        sort(v1.begin(), v1.end());
        v1.erase( unique(v1.begin(),v1.end()), v1.end() );
        
        sort(v2.begin(), v2.end());
        v2.erase( unique(v2.begin(),v2.end()), v2.end() );
        
        vector<int> same;
        for(int i=0;i<v1.size();i++){
            for(int j=0;j<v2.size();j++){
                
                if( v1[i] == v2[j] ){
                    same.push_back( v1[i] );
                }
                
            }
        }
        
        return same;
    }
    
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        
        vector<int> n1n2 = compare( nums1, nums2 );
        vector<int> n2n3 = compare( nums2, nums3 );
        vector<int> n3n1 = compare( nums3, nums1 );
        
        vector<int> res;
        for(int i=0;i<n1n2.size();i++)      res.push_back( n1n2[i] );
        for(int i=0;i<n2n3.size();i++)      res.push_back( n2n3[i] );
        for(int i=0;i<n3n1.size();i++)      res.push_back( n3n1[i] );
        
        sort( res.begin(), res.end() );
        res.erase( unique(res.begin(),res.end()), res.end() );
        
        return res;
    }
};