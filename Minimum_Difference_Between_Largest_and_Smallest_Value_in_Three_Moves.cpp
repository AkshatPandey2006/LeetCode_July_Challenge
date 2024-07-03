int minDifference(vector<int>& nums) {
    int n = nums.size();
    if (n <= 4) return 0; 
        
    sort(nums.begin(), nums.end());
        
    int mini_mini = INT_MAX;
    for (int i = 0; i <= 3; ++i) {
        mini_mini = min(mini_mini, nums[n-4+i] - nums[i]);
    }
        
    return mini_mini;
}
