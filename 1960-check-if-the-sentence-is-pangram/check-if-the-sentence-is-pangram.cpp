class Solution {
public:
    bool checkIfPangram(string sentence) {
        for(char i='a';i<='z';i++){
            int isFound=0;
            for( int j=0;j<sentence.size();j++){
                if(sentence[j]==i) isFound=1;
            }
            if(isFound==0){
                return false;
                break;
            }
        }
        return true;

        
    }
};