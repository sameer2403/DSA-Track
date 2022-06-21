int N = nums.size();
for (int i = 0; i < N - 1; i++)
{
    int lo = i + 1;
    int hi = N;
    while (lo < hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] == target - nums[i])
            return {i + 1, mid + 1};
        else if (nums[mid] >= target - nums[i])
            hi = mid;
        else
            lo = mid + 1;
    }
}
return {}; // not found