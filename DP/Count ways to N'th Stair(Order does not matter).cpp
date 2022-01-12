Input: N = 4
Output: 3
Explanation: Three ways to reach at 4th stair.
They are {1, 1, 1, 1}, {1, 1, 2}, {2, 2}.


//code
	int nthStair(int n){
		    //  Code here
		    if(n==0)return 1;
        if(n==1) return 1;
         int dp[n+1];
        dp[0]=1;
        dp[1]=1;
       
        for(int i=2; i<=n; i++){
            dp[i]=dp[i-2]+1;
        }
        return dp[n];
		}