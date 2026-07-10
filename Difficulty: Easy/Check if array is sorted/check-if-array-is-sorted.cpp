class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        bool isless=true;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]>arr[i+1]){
                isless=false;
                break;
            }
        }
        return isless;
    }
};