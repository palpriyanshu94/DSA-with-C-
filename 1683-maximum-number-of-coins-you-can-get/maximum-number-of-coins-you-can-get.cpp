class Solution {
public:
    int maxCoins(vector<int>& piles) {
    sort(piles.begin(), piles.end());
    int n = piles.size();
    int rounds = n / 3;
    
    int ans = 0;
    
    int i = n - 2;
    int left = 0;
    while (rounds--) {
        ans += piles[i];  
        i -= 2;           
        left++;           
    }
    
    return ans;
    }
};