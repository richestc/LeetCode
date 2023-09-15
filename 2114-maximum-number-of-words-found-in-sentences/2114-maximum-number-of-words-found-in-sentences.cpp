class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        vector<int> res;
        
        int count = 0;
        
        for(int i=0;i<sentences.size();i++){
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j] == ' '){
                    count++;
                }
            }
            res.push_back( count+1 );
            count = 0;
        }
        
        return *max_element( res.begin(), res.end() );
    }
};