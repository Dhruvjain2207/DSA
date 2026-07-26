class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row=matrix.size();
        
        for(int i=0;i<row;i++){
            for(int j=i+1;j<row;j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }  
        for(int i=0;i<row;i++){
            int* a=&matrix[i][0];
            int* b=&matrix[i][row-1];
            while(a<b){
                int temp=*a;
                *a=*b;
                *b=temp;
                a++;
                b--;
            }
        }

    }
};