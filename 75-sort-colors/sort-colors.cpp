class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r=0;
        int w=0;
        int b=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)r++;
             if(nums[i]==1)w++;
             if(nums[i]==2) b++;
        }
        for(int i=0;i<nums.size();i++){
            if(i<r)nums[i]=0;
            else if(i<r+w)nums[i]=1;
            else if(i<r+w+b)nums[i]=2;
        }
    }
};