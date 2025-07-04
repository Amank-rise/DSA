class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int> num(256,-1);
        int maxl = 0, start = -1;
        for (int i=0;i<s.size();i++){
            if(num[s[i]]> start){
                start = num[s[i]];
            }
            num[s[i]] = i;
            maxl = max(maxl,i-start);
        }
        return maxl;
    }
};