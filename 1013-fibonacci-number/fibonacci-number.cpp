class Solution {
public:
    int fib(int n) {
        int a=0;
        int b=1;
        if(n==0) return a;
        if(n==1) return b;
        long long c;
        n--;
        while(n--){
           c = (long long)a+ (long long)b;
          a= b;
            b=c;
        }return c;

    }
};