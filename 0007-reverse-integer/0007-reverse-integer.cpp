class Solution {
public:
    int reverse(int x) {
        int x1=x;
        long long x2=0;
        while(x1){
            int rem=x1%10;
            x2=x2*10+rem;
            x1=x1/10;
        }
        if(x2>INT_MAX||x2<INT_MIN)return 0;
        else return x2;
    }
};