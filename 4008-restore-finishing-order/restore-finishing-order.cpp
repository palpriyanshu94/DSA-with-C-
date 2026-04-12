class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
         unordered_set<int> st(friends.begin(), friends.end());
        vector<int> result;

        for (int x : order) {
            if (st.count(x)) {
                result.push_back(x);
            }
        }

        return result;
    }
};