string decodeMessage(string key, string message)
{
    char ch = 'a';
    map<char, char> mp;
    for (auto it : key)
    {
        if (it != ' ' && mp.find(it) == mp.end())
        {
            mp[it] = ch;
            ch++;
        }
    }
    string res;
    for (auto it : message)
    {
        if (it == ' ')
            res += it;
        if (mp.find(it) != mp.end())
            res.push_back(mp[it]);
    }
    return res;
}