class Solution {
public:
    bool isHappy(int n) {
        int rem, sum=0;
        while(n!=1 && n!=4){
         while(n!=0){
           rem=n%10;
           sum= sum+rem*rem;
           n= n/10;
        }
        n=sum;
        sum=0;
        }
        if(n==1){
            return true;
        }
        return false;
    }
};