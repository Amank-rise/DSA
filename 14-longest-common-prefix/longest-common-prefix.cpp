class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first = strs[0];
        string second = strs[strs.size()-1];
        string ans="";
        int minl = min(first.size(),second.size());
        for(int i =0 ;i<minl;i++){
            if(first[i]!= second[i]) break;
            ans+=first[i];
        }return ans;
    }
};