class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int* i=&arr[0];
        int* j=&arr[arr.size()-1];
        
        while(i<j){
            if(*i==0 && *j==1){
                i++;
                j--;
            }
            else if(*i==1 && *j==0){
                int temp;
                temp=*j;
                *j=*i;
                *i=temp;
                i++;
                j--;
            }
            else if(*i==1 && *j==1){
                j--;
            }
            else if(*i==0 && *j==0){
                i++;
            }
        }
        
    }
};