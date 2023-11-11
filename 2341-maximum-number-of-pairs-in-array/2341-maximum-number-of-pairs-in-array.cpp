class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int m = *max_element(nums.begin(),nums.end());
        
        vector<int> bmap( m+1, 0 );
        for(int i=0;i<nums.size();i++){
            bmap[ nums[i] ]++;
        }
        
        int p = 0;
        for(int i=0;i<bmap.size();i++)  p = p + ( bmap[i] / 2 );
        
        int rem = 0;
        for(int i=0;i<bmap.size();i++)  rem = rem + ( bmap[i] % 2 );
        
        //print
        for(int i=0;i<bmap.size();i++)  cout << bmap[i] << " ";
        
        return {p, rem};
    }
};