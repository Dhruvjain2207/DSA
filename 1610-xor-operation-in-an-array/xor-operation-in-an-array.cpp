class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>v;
        
        for(int i=0;i<n;i++){
            v.push_back(start+2*i);

        }
        int res=v[0];
        for(int j=1;j<v.size();j++){
            res=res^v[j];
        }
        return res;

        
    }
};