int solve(vector<vector<int>>& matrix) {
      int n = matrix.size();

    if (n == 0) return 0;
    int m = matrix[0].size();

    int dp[n][m];

    for (int i = 0; i < n; i++) dp[i][0] = matrix[i][0];
    for (int j = 0; j < m; j++) dp[0][j] = matrix[0][j];

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (matrix[i][j] == 0)
                dp[i][j] = 0;
            else {
                if ((matrix[i - 1][j] == 1) && (matrix[i][j - 1] == 1) &&
                    (matrix[i - 1][j - 1] == 1))
                    dp[i][j] = min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1])) + 1;
                else
                    dp[i][j] = 1;
            }
        }
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) ans = max(ans, dp[i][j]);
    }

    return ans * ans;
}