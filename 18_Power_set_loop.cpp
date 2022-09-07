#include <bits/stdc++.h>
using namespace std;

class Solution {
    
private:
    void solve(vector<int> nums, vector<int> op, int i, vector<vector<int>> &ans)
    {
        if (i >= nums.size()) 
        {
            ans.push_back(op);
            return;
        }
        
        // exclude case:
        solve(nums, op, i+1, ans);        
        // Include case:
        op.push_back(nums[i]);
        solve(nums, op, i+1, ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> output;
        vector<vector<int>> ans;
        int i = 0;
        solve(nums, output, i, ans);
        return ans;
    }
};