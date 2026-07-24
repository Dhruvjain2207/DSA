class Solution {
public:
     void reversePart(vector<int>&v,int a,int b){
            int* i=&v[a];
            int* j=&v[b];
            while(i<j){
                int temp=*j;
                *j=*i;
                *i=temp;
                i++;
                j--;
            }
        }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
       k=k%n;
       
        
        reversePart(nums,0,n-k-1);
        reversePart(nums,n-k,n-1);
        reversePart(nums,0,n-1);
        
    }
};