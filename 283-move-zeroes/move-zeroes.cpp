class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,j;
        for(int k=0;k<nums.size();k++){
            if(nums[k]==0){
                j=k;
                break;
            }
        }
        i=j+1;
        while(i<=nums.size()-1){
            if(nums[i]!=0){
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                i++;
                j++;
            }
            else{
                i++;
            }
        }

    }
};