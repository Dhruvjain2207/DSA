class Solution {
public:
    int sumOfDigit(int n){
        int a=n;
        int sum=0;
        while(a!=0){
            sum+=a%10;
            a/=10;
        }
        return sum;
    }

    int differenceOfSum(vector<int>& nums) {
        int eleSum=0,digitSum=0;
        for(int i=0;i<nums.size();i++){
            eleSum+=nums[i];
            digitSum+=sumOfDigit(nums[i]);
        }
        return(abs(eleSum-digitSum));
        
    }
};