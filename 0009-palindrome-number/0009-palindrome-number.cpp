class Solution {
public:
    bool isPalindrome(int x) {
       if(x<0){
           return false;
       } 
    long long  a=0;
        long long  b=x;
        while(x!=0){
            int rem=x%10;
            a=10*a+rem;
            x=x/10;
        }
        if(b==a)return true;
        return false;
        
    }
};