class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v;
        int row=matrix.size();
        int cols=matrix[0].size();
        int minr=0;
        int maxr=row-1;
        int minc=0;
        int maxc=cols-1;
        while(minr<=maxr && minc<=maxc){
            //right
            for(int j=minc;j<=maxc;j++){
                  v.push_back(matrix[minr][j]);
            }
            minr++;
            //down

            for(int i=minr;i<=maxr;i++){
                v.push_back(matrix[i][maxc]);
            }
            maxc--;

            //left
           if(minr<=maxr){
             for(int k=maxc;k>=minc;k--){
                v.push_back(matrix[maxr][k]);
            }
            maxr--;
           }

            //top

           if(minc<=maxc){
             for(int l=maxr;l>=minr;l--){
                v.push_back(matrix[l][minc]);
            }
            minc++;
           }

        }
        return v;
    }
};