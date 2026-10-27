class Solution {
public:
    int addDigits(int num) {
        if(num%10 == num){
            return num;
        }
        int a =num;
        int sum;
        while(true){
            int sum=0;

            while(a!=0){
                sum+=a%10;
                a/=10;
            }

            if(sum<10){
                return sum;
            }
            a=sum;
        }

    
        
    
    };
};
