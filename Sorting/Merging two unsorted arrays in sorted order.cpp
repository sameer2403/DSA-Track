/*
GIven two different arrays A and B of size N and M, 
the task is to merge the two arrays which are unsorted
 into another array which is sorted.


Example 1:

Input: N = 3, M = 3
A[] = {10, 5, 15}
B[] = {20, 3, 2}
Output: 2 3 5 10 15 20
*/

	void sortedMerge(int a[], int b[], int res[],int n, int m)
	{
	   // Your code goes here
	   sort(a,a+n);
	   sort(b,b+m);
	   int i=0, j=0,k=0;
	   while(i<n && j<m)
	   {
	       if(a[i]<=b[j])
	       res[k++]=a[i++];
	       else if(b[j]<=a[i])
	       res[k++]=b[j++];
	       else
	       {
	           res[k++]=a[i++];
	           j++;
	       }
	   }
	   while(i<n)
	   res[k++]=a[i++];
	   while(j<m)
	   res[k++]=b[j++];
	}

    // Expected Time Complexity: O (NlogN + MlogM + (N + M))
    // Expected Auxiliary Space: O(N+M).

 