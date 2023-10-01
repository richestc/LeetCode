class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> all_nums;
        for(int i=0;i<nums1.size();i++){
            all_nums.push_back( nums1[i] );
        }
        for(int i=0;i<nums2.size();i++){
            all_nums.push_back( nums2[i] );
        }
        
        sort( all_nums.begin(), all_nums.end() );
        
        int size1 = 0;
        int size2 = 0;
        double res = 0;
        if( all_nums.size() % 2 == 1 ){
            size2 = all_nums.size() / 2;
            res = all_nums[ size2 ];
            
            return res;
        }
        
        size1 = (all_nums.size() / 2) -1;
        size2 = all_nums.size() / 2;
        res = ( all_nums[ size1 ] + all_nums[ size2 ] ) / double(2); //THE TRICK!
        
        return res;
    }
};