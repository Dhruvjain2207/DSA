class Solution {
public:
    void reversePart(vector<int>& v,int a,int b){
        int* i=&v[a];
        int* j=&v[b];
        while(i<j){
            int temp=*i;
            *i=*j;
            *j=temp;
            i++;
            j--;
        }
    }
    void nextPermutation(vector<int>& nums) {
        int idx=-1;
        int idx2=-1;
        int n=nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
              idx=i;
              break;
            }
        }
        if(idx==-1){
           reversePart(nums,0,nums.size()-1);
        }
        else{
            reversePart(nums,idx+1,nums.size()-1);
            for(int i=idx+1;i<nums.size();i++){
                if(nums[i]>nums[idx]){
                    idx2=i;
                    break;
                }

            }
            int temp=nums[idx];
            nums[idx]=nums[idx2];
            nums[idx2]=temp;
        }
        
    }
};