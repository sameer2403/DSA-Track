/*
Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].
*/
vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    int n = intervals.size();
    vector<vector<int>> res;
    sort(intervals.begin(), intervals.end());
    //  for(int i=0; i<n; i++) res.push_back(intervals[i]);
    res.push_back(intervals[0]);
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        if (intervals[i][0] <= res[j][1])
        {
            res[j][1] = max(intervals[i][1], res[j][1]);
        }
        else
        {
            j++;
            res.push_back(intervals[i]);
        }
    }
    return res;
}