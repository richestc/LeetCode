class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        vector<int> res;
        
        for(int i=0;i<arr2.size();i++){       
            for(int j=0;j<arr1.size();j++){
                
                if( arr1[j] == arr2[i] ){
                    res.push_back( arr1[j] );
                }
                
            }
        }
        
        vector<int> extras;
        
        int count = 0;
        for(int i=0;i<arr1.size();i++){
            for(int j=0;j<arr2.size();j++){
                
                count++;
                
                if( arr1[i] == arr2[j] ){
                    count = 0;
                    break;
                }
                
                if( count >= arr2.size() ){
                    extras.push_back( arr1[i] );     
                }
                               
            }
            count = 0;
        }
        
        sort( extras.begin(), extras.end() );
        for(int i=0;i<extras.size();i++){
            res.push_back( extras[i] );
        }
        
        return res;
        
    }
};