Input:
N = 5
Arr[] = {1,2,3,-2,5}
Output:
9
Explanation:
Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which 
is a contiguous subarray.


//code

 long long maxSubarraySum(int arr[], int n){
        // Your code here
        int res=arr[0];
       int  maxEnding=arr[0];
        for(int i=1; i<n; i++){
            maxEnding=max(arr[i]+maxEnding,arr[i]);
            res=max(maxEnding,res);
        }
        return res;
        
        
    }