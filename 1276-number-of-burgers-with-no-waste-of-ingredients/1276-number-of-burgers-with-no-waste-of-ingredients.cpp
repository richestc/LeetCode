class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        int jb = 0;
        int sb = 0;
        for(int i=0;i<cheeseSlices;i++){
            tomatoSlices = tomatoSlices - 2;
            sb++;
        }
        
        if( tomatoSlices < 0 )          return {};
        if( tomatoSlices % 2 == 1 )     return {};  
        if( tomatoSlices == 0 )         return {0, sb};
        
        while( tomatoSlices > 0 ){
            sb--;
            jb++;
            
            tomatoSlices = tomatoSlices - 2;
        }
        
        if( jb < 0 || sb < 0 )  return {};
        
        return {jb,sb};
    }
};