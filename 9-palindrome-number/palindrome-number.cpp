class Solution {
public:
    bool isPalindrome(int x) {
        string m = to_string(x);
       auto left = 0;
       auto right = m.length()-1;
       while(left<right){
        if(m[left] != m[right]){
            return false;
        }
        left++;
        right--;
       }return true;
    }
};