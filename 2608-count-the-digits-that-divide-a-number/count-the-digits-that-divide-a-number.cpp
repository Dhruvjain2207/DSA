class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int a=num;
        while(a!=0){
            if(num % (a%10)==0){
                count++;
            }
            a/=10;
        }
        return count;
        
    }
};