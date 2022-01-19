int solve(string a, string b, string c) {
    int m=a.length();
    int n=b.length();
    int o=c.length();
    int dp[m + 1][n + 1][o + 1];

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
             for (int k = 0; k <= o; k++) {
                 if(i==0 || j==0 || k==0)
            dp[i][j][k] = 0;
        }
    }
    }
   

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= o; k++) {
                if (a[i - 1] == b[j - 1] && b[j - 1] == c[k - 1]) {
                    dp[i][j][k] = 1 + dp[i - 1][j - 1][k - 1];
                }
                else {
                    dp[i][j][k] = max(dp[i - 1][j][k], max(dp[i][j - 1][k], dp[i][j][k - 1]));
                }
            }
        }
    }
    return dp[m][n][o];
     
}