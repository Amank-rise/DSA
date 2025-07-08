class Solution {
public:
    int reverse(int x) {
        long copy=x,rev=0;
       
        while (copy!=0){
            
            rev= (rev*10)+(copy%10);
            copy/=10;
        }
        if(rev<INT_MIN || rev>INT_MAX){
            return 0;
        }
         return (int)rev;
    }
};