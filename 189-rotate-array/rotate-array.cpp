class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>m;
       
        int n= nums.size(); k=k%n;
        for(int i=n-k;i<n;i++){
            m.push_back(nums[i]);

        }for(int i=0;i<n-k;i++){
            m.push_back(nums[i]);
        }nums = m;
    }
};