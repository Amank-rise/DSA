class Solution {
public:
    int myAtoi(string s) {
       int i = 0 ,sign=1; 
       long res=0;
       while(i<s.size() && s[i]==' '){
        i++;
       }
       if( i==s.size() ) return 0;
       if(s[i]=='-'){
        sign=-1;
        i++;
       }else if(s[i]=='+'){
        sign=1;
        i++;
       }
       while(i<s.size()&& isdigit(s[i])){
      int digit  = s[i] - '0';
        if(sign == 1) {
            // For positive numbers
            if(res > (INT_MAX - digit) / 10) {
                return INT_MAX;
            }
        } else {
            // For negative numbers
            // Note: res is positive, but we're building a negative number
            if(res > (INT_MAX - digit) / 10) {
                // If this would overflow when negated
                return INT_MIN;
            }
        }  res=res*10 + (s[i]-'0');
        i++;
       }
        return (int)res*sign;
    }
};