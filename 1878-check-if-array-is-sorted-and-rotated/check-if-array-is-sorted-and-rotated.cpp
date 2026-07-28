class Solution {
public:
   
    bool check(vector<int>& nums) {
        int n=nums.size();
        bool isSorted=true;
        

        for(int k=0;k<nums.size()-1;k++){
            if(nums[k]>nums[k+1]){
                isSorted=false;
                
                break;
            }


        }
        if(isSorted){
            return true;
        }
       
    

        for(int i=1;i<=nums.size();i++){
             isSorted=true;
            reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + 1);
        reverse(nums.begin() + 1, nums.end());
        for(int j=0;j<nums.size()-1;j++){
            if(nums[j]>nums[j+1]){
                
                isSorted=false;
                break;

            }
        
       
            
            
        }
       if(isSorted) return true;
        
    }
    return false;
    }
};