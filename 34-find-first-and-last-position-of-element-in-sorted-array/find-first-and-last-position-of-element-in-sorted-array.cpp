class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2,-1);
        int first_pos=-1;
        int last_pos=-1;
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]==target && first_pos==-1){
                first_pos=i;
                last_pos=i;
            }
            else if(nums[i]==target && first_pos>=0){
                last_pos=i;
            }
        }
        result[0]=first_pos;
        result[1]=last_pos;
        return result;
    }
};