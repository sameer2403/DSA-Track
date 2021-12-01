int Maximize(int a[],int n)
    {
        // Complete the function
        int mod=1e9+7;
        sort(a,a+n);
       unsigned long long int res=0;
        for(int i=0; i<n; i++)
        {
            res=(res+((unsigned long long)a[i]*i)%mod)%mod;
        }
      return res;
    }