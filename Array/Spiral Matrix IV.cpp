vector<vector<int>> spiralMatrix(int m, int n, ListNode *head)
{
    vector<vector<int>> res(m, vector<int>(n, -1));
    ListNode *curr = head;
    int top = 0, bottom = m - 1, left = 0, right = n - 1;
    while (curr != NULL && top <= bottom && left <= right)
    {
        int i = left;
        while (i <= right && curr != NULL)
        {
            res[top][i] = curr->val;
            curr = curr->next;
            i++;
        }
        top++;
        int j = top;
        while (curr != NULL && j <= bottom)
        {
            res[j][right] = curr->val;
            curr = curr->next;
            j++;
        }
        right--;
        if (top <= bottom)
        {
            int k = right;
            while (k >= left && curr != NULL)
            {
                res[bottom][k] = curr->val;
                curr = curr->next;
                k--;
            }
            bottom--;
        }
        if (left <= right)
        {
            int l = bottom;
            while (l >= top && curr != NULL)
            {
                res[l][left] = curr->val;
                curr = curr->next;
                l--;
            }
            left++;
        }
    }
    return res;
}