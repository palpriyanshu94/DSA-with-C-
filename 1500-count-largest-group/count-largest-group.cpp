class Solution {
public:
    int countLargestGroup(int n) {
         unordered_map<int, int> mp;

        // Step 1: count group sizes
        for (int i = 1; i <= n; i++) {
            int x = i, sum = 0;
            while (x > 0) {
                sum += x % 10;
                x /= 10;
            }
            mp[sum]++;
        }

        // Step 2: find max group size
        int maxi = 0;
        for (auto &it : mp) {
            maxi = max(maxi, it.second);
        }

        // Step 3: count how many groups have max size
        int count = 0;
        for (auto &it : mp) {
            if (it.second == maxi)
                count++;
        }

        return count;
    }
};