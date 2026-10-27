class Solution {
public:
    bool isPalindrome(string s){
        string s2=s;
        int i=0;
        int j=s2.size()-1;
        while(i<j){
             char c=s2[i];
             s2[i]=s2[j];
             s2[j]=c;
             i++;
             j--;
        }
        if(s==s2) return true;
        return false;
    }
    string firstPalindrome(vector<string>& words) {
    
            for(int i=0;i<words.size();i++){
                if(isPalindrome(words[i])){
                    return words[i];
                    break;
                }
            }
            return "";
            
        }
        
    
};