class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      unordered_map<long long, int> prefixSumCount;
    prefixSumCount[0] = 1; // There's one way to have sum 0: empty subarray
    long long sum = 0;
    int count = 0;
    
    for(int num : nums) {
        sum += num; // Current cumulative sum
        
        // If (current_sum - k) exists in our map, it means:
        // There's a subarray from some previous point to current point that sums to k
        long long needed = sum - k;
        
        if(prefixSumCount.find(needed) != prefixSumCount.end()) {
            count += prefixSumCount[needed];
        }
        
        // Record that we've seen this cumulative sum
        prefixSumCount[sum]++;
    }
    
    return count;

}
    
};