class Solution {
public:
    int similarPairs(vector<string>& words) {
        int count = 0;
        
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words.size();j++){
                if( i != j ){
                    string temp1 = words[i];
                    string temp2 = words[j];
                    
                    sort( temp1.begin(), temp1.end() );
                    temp1.erase( unique( temp1.begin(), temp1.end() ), temp1.end() );
                    
                    sort( temp2.begin(), temp2.end() );
                    temp2.erase( unique( temp2.begin(), temp2.end() ), temp2.end() );
                    
                    if( temp1 == temp2 ){
                        count++;
                    }
                    
                }
            }
        }
        
        return count /2;
    }
};