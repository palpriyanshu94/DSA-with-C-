class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>sum;
        int n=nums.size();
        int add=0;
        for(int i=0;i<n;i++){
             add+=nums[i];
             sum.push_back(add);
        }
        return sum;
    }
};