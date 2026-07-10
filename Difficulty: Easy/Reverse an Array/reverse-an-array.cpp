class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int* i=&arr[0];
        int* j=&arr[arr.size()-1];
        
         while(i<j){
             int temp;
             temp=*j;
             *j=*i;
             *i=temp;
             i++;
             j--;
         }
    }
};