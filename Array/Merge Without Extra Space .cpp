void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	     int i=n-1;
    int j=0;
    while(i>=0 && j<m){
        if(arr1[i]>arr2[j]){
            swap(arr1[i],arr2[j]);
        }
        i--;
        j++;
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
	}

    //Expected Time Complexity: O((n+m)*log(n+m))
   //Expected Auxiliary Space: O(1)
   /*
   Input:
N = 2, M = 3
arr1[] = {10, 12}
arr2[] = {5, 18, 20}
Output: 5 10 12 18 20
Explanation: Since you can't use any
extra space, modify the given arrays
to form 
arr1[] = {5, 10}
arr2[] = {12, 18, 20}