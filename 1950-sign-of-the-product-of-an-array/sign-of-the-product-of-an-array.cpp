class Solution {
public:
            double signFunc(double x){
            if(x>0){
                return 1;
            }else if(x<0){
                return -1;
            }else{
                return 0;
            }  
        }
    int arraySign(vector<int>& nums) {

        double pro=1;
        for(int i=0;i<nums.size();i++){
            pro*=nums[i];
        }

        return signFunc(pro);

        
    }
};