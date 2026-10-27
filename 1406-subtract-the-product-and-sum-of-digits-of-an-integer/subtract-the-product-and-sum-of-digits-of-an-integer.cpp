class Solution {
public:
    int subtractProductAndSum(int n) {
        int a=n;
        int sum=0,product=1;
        while(a!=0){
            sum+=a%10;
            product*=a%10;
            a/=10;
        }
        return product-sum;
        
    }
};