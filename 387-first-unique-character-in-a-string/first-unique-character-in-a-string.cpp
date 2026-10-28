class Solution {
public:
    int firstUniqChar(string s) {
       for(int i=0;i<s.size();i++){
        int a=0;
        for(int j=0;j<s.size();j++){
            if(i!=j && s[i]==s[j]){
               a=1;
               break;
            }
        }
        if(a==0){
            return i;
        }
       }
       return -1;
    }
};