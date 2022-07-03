int findPoisonedDuration(vector<int> &ts, int dur)
{
    int n = ts.size();
    if (n == 0)
        return 0;
    int cntdur = 0;
    for (int i = 0; i < n - 1; i++)
    {
        // not overlapping
        if (ts[i + 1] - ts[i] <= dur)
        {
            cntdur += ts[i + 1] - ts[i];
        }
        else
            cntdur += dur;
    }
    return cntdur + dur;
}