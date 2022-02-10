static bool cmp(string a, string b)
{
    return (a + b) >= (b + a);
}

string solve(vector<int> &nums)
{
    vector<string> st;
    for (int i : nums)
    {
        st.push_back(to_string(i));
    }
    sort(st.begin(), st.end(), cmp);
    string res;
    for (string s : st)
    {
        res += s;
    }
    return res;
}