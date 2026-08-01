class Solution {
public:
     vector<vector<int>> ans;

    void backtrack(int start, int n, int k, vector<int>& temp) {
        // If we have selected k numbers, store the combination
        if (temp.size() == k) {
            ans.push_back(temp);
            return;
        }

        // Try every possible number
        for (int i = start; i <= n; i++) {
            temp.push_back(i);          // Choose
            backtrack(i + 1, n, k, temp); // Explore
            temp.pop_back();            // Backtrack
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        backtrack(1, n, k, temp);
        return ans;
    }
};