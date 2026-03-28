class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
         int n = score.size();
    
    // Pair of (score, original index)
    vector<pair<int, int>> arr;
    for (int i = 0; i < n; i++) {
        arr.push_back({score[i], i});
    }
    
    // Sort in descending order
    sort(arr.begin(), arr.end(), greater<pair<int, int>>());
    
    vector<string> answer(n);
    
    for (int i = 0; i < n; i++) {
        int idx = arr[i].second;
        
        if (i == 0) answer[idx] = "Gold Medal";
        else if (i == 1) answer[idx] = "Silver Medal";
        else if (i == 2) answer[idx] = "Bronze Medal";
        else answer[idx] = to_string(i + 1);
    }
    
    return answer;
    
    }
};