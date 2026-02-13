class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> answer;
        int n=nums.size();

        for(int i=0;i<n;i++){
            answer.push_back(abs(nums[i]*nums[i]));
        }
        sort(answer.begin(),answer.end());
        return answer;
    }
};