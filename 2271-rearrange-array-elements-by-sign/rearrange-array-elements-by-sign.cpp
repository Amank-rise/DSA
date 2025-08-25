class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>res(n);
        vector<int>copy1;
        vector<int>copy2;
        
        for(int i = 0;i<n;i++){
            if(nums[i]>0 ){
               copy1.push_back(nums[i]);
            }else{
             
               copy2.push_back(nums[i]);
            }

        }
        for(int i=0;i<n/2;i++){
           res[2*i] = copy1[i];
           res[2*i+1] = copy2[i];
        }return res;
    }
};