/*
Input
s = "rzacecarx"
k = 2
Output
true
*/


bool solve(string s, int k) {
     int n=s.length();
     string revS=s;
    reverse(revS.begin(),revS.end());
   
    int t[n+1][n+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++ ){
            if(i==0 || j==0)
            t[i][0]=0;
           t[0][j]=0;
        }
    }
    for(int i=1;i<=n;i++){
       for(int j=1;j<=n;j++){
           if(s[i-1]==revS[j-1]){
               t[i][j]=1+t[i-1][j-1];
           }
           else t[i][j]=max(t[i-1][j],t[i][j-1]);
       }
    }
    return n-t[n][n]<=k;
}