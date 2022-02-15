vector<int> solve(vector<int> &nums, int k)
{
    vector<int> v;
    int n = nums.size();
    if (n == 0)
        return v;
    unordered_map<int, int> mp;
    for (int i = 0; i < k; i++)
        mp[nums[i]]++;
    v.push_back(mp.size());
    for (int i = k; i < n; i++)
    {
        // Remove the starting element from the current window as you move to next window
        mp[nums[i - k]]--;
        if (mp[nums[i - k]] == 0)
            mp.erase(nums[i - k]);

        mp[nums[i]]++;
        v.push_back(mp.size());
    }
    return v;
}