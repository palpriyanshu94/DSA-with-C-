class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1){
            return 0;
        }
        int left=0;
        long long product=1;
        int result=0;
        int n=nums.size();

        for(int i=0;i<n;i++){
            product*=nums[i];
           while(product>=k){
            product/=nums[left];
            left++;
           }
           result+=(i-left+1);
        }
        return result;
    }
};