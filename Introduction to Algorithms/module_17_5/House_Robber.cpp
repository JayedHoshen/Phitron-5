// class Solution {
// public:
//     int dp[105];
//     int fun(int n, vector<int>& nums) {
//         if(n < 0) return 0;
//         if(dp[n] != -1) return dp[n];
//         int opt1 = nums[n] + fun(n-2, nums);
//         int opt2 = fun(n-1, nums);
//         return dp[n] = max(opt1, opt2); 
//     }

//     int rob(vector<int>& nums) {
//         memset(dp, -1, sizeof(dp));
//         int n = nums.size();
//         int ans = fun(n-1, nums);
//         return ans;
//     }
// };