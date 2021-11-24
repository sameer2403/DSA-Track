
	public:
	vector<int> alternateSort(int arr[], int N)
	{
	    // Your code goes here
	    vector<int>v;
	    if(N==1)
	    v.push_back(arr[0]);
	    sort(arr,arr+N);
	    int l=0, h=N-1;
	    int i=0;
	    while(l<h)
	    {
	        if(i%2==0)
	        {
	            v.push_back(arr[h--]);
	            v.push_back(arr[l++]);
	        }
	        if(l==h){
	            v.push_back(arr[l++]);
	            h--;
	        }
	        i+=2;
	        
	        
	    }
	    return v;
	}

	

