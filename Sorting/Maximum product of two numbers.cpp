	int maxProduct(int arr[], int n) {
	    // code here
	   /* sort(arr,arr+n);
	    int res=arr[n-1]*arr[n-2];
	    return res;
	    */
	    int mx=0, mx2=0;
	    for(int i=0; i<n; i++){
	        if(arr[i]>=mx)
	        {
	        mx2=mx;
	        mx=arr[i];
	        }
	        else if(arr[i]>=mx2)
	        mx2=arr[i];
	        
	    }
	    return mx*mx2;
	}