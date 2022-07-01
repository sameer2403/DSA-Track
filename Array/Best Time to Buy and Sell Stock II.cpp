int maxProfit(vector<int> &prices)
{
    int res = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] > prices[i - 1])
        {
            int val = prices[i] - prices[i - 1];
            res += val;
        }
    }
    return res;
}