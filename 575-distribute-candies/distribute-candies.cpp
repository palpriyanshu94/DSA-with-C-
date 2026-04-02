class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
    unordered_set<int> st(candyType.begin(), candyType.end());
    int answer=min((int)st.size(), (int)candyType.size() / 2);
    return answer;        
    }
};