class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int>mpp(26);
        for(auto ch : s){
            mpp[ch]++;
        }
        for(auto ch: t){
            mpp[ch]--;
        }
        for(auto m : mpp){
            if(m.second != 0){
                return false;
            }
        }return true;
    }
};