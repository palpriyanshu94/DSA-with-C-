class Solution {
public:
    int longestMountain(vector<int>& arr) {
        // int mountain=0;
        // int n=arr.size();
        // if(n<3){
        //     return 0;
        // }
        // for(int i=0;i<n;i++){
        //         while(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
        //             mountain=1;
        //             mountain+=2;
        //         }
        // }
        // return mountain;
        int n = arr.size();
        if (n < 3) return 0;

        int ans = 0;
        int i = 1;

        while (i < n - 1) {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                int left = i - 1;
                int right = i + 1;

                while (left > 0 && arr[left] > arr[left - 1])
                    left--;

                while (right < n - 1 && arr[right] > arr[right + 1])
                    right++;

                ans = max(ans, right - left + 1);
                i = right; 
            } else {
                i++;
            }
        }
        return ans;
    }
};