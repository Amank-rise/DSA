class Solution {
public:
    string longestPalindrome(string s) {
int start =0, end = 0;
for(int center =0;center< s.length();center++){
    int leno = expand(s,center,center);
    int lenv = expand(s,center,center+1);
    int maxlen= max(leno,lenv);
    if(maxlen>end-start){
        start = center-(maxlen-1)/2;
        end = center+maxlen/2;
    }
}
return s.substr ( start,end-start +1);
    }
    private:
int expand(const string& s,int left,int right){
    while(left>=0&& right < s.length()&& s[left]==s[right]){
        left--;
        right++;
    }return right-left-1;
}
};
