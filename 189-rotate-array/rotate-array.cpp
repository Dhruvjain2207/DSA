class Solution {
public:
   void reverseArr(vector<int>& arr,int a , int b){
    while(a<b){
        int temp=arr[a];
        arr[a]=arr[b];
        arr[b]=temp;
        a++;
        b--;
    }
   }
    void rotate(vector<int>& nums, int k) {
        if(k>nums.size()){
            k=k%nums.size();
        }
        int n=nums.size();
        reverseArr(nums,0,n-k-1);
        reverseArr(nums,n-k,n-1);
        reverseArr(nums,0,n-1);
        
        
    }
};