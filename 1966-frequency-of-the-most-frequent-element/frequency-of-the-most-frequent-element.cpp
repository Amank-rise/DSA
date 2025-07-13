class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
    int freq = 1,start = 0,end = 0;
    long sum=0;
    sort(nums.begin(),nums.end());
    while(end<nums.size()){
         sum= sum+nums[end++];
         if( k+sum<((long)nums[end-1]*(end-start))){
            sum=sum-nums[start++];
         }
    freq = max(freq,end-start);
    }return freq;
}
        
    
};