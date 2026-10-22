class Solution {
public:
    int countEven(int num) {
        int count=0,sum=0;
        for(int i=1; i<=num; i++){
            int j=i;
            while(j!=0){
            int rem= j%10;
            sum= sum+rem;
            j=j/10;
            }
            if(sum%2==0)
            count++;

            sum=0;
        }
        return count;
    }
};