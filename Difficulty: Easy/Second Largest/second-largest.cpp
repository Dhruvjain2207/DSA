class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int max=INT_MIN;
        int smax=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max){
                smax=max;
                max=arr[i];
                
            }
            if(arr[i]>smax && arr[i]<max)smax=arr[i];
        }
        if(smax==INT_MIN) return -1;
        else return smax;
    }
};