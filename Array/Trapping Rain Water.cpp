 long long trappingWater(int arr[], int n){
        // code here
        int maxr[n], maxl[n];
         maxl[0]=arr[0];
         maxr[n-1]=arr[n-1];
        for(int i=1; i<n; i++){
            maxl[i]= max(arr[i], maxl[i-1]);
        }
        for(int i=n-2; i>=0; i--){
            maxr[i]=max(arr[i],maxr[i+1]);
        }
        long long water=0;
        for(int i=0; i<n; i++){
            water+=min(maxr[i],maxl[i])-arr[i];
        }
        return water;
    }