int solve(int n)
{
    string s = to_string(n);
    int i = 0, j = 0;
    for (i = s.size() - 2; i >= 0; i--)
    {
        if (s[i] < s[i + 1])
            break;
    }
    if (i < 0)
    {
        sort(s.begin(), s.end());
        return stoi(s);
    }
    for (j = s.size() - 1; j >= 0; j--)
    {
        if (s[j] > s[i])
            break;
    }
    swap(s[i], s[j]);
    sort(s.begin() + i + 1, s.end());
    return stoi(s);
}