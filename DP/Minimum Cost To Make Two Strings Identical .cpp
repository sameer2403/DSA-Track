int findMinCost(string X, string Y, int costX, int costY)
	{
	    // Your code goes here
	    int m= X.length();
	    int n = Y.length();
	    int dp[m+1][n+1];
	    for(int i=0; i<m+1; i++) dp[i][0]=0;
	    for(int j=0; j<n+1; j++) dp[0][j]=0;
	      for(int i=1; i<m+1; i++) {
	    for(int j=1; j<n+1; j++){
	        if(X[i-1]==Y[j-1])
	        dp[i][j]=1+dp[i-1][j-1];
	        else
	        dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
	    }
	    
	    }
	    int lcs=dp[m][n];
	    int minCost= (m-lcs)*costX + (n-lcs)*costY;
	    return minCost;
	    
	
	}