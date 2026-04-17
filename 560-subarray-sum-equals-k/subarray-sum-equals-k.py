class Solution(object):
    def subarraySum(self, nums, k):
        prefix_sum_count = {0: 1}  # base case
        
        curr_sum = 0
        count = 0
        
        for num in nums:
            curr_sum += num
            
            if (curr_sum - k) in prefix_sum_count:
                count += prefix_sum_count[curr_sum - k]
            
            prefix_sum_count[curr_sum] = prefix_sum_count.get(curr_sum, 0) + 1
        
        return count