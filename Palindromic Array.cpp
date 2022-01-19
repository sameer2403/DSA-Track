Input:
2
5
111 222 333 444 555
3
121 131 20

Output:
1
0
// ....................................


int reverseTheNumber(int n)
{
   int ans  = 0;
   while(n)
   {
       int rem = n%10;
       n = n /10;
       ans = ans *10 + rem;
   }
   return ans;
}
    int PalinArray(int a[], int n)
    {
    	// code here
    	  for(int i=0; i<n; i++)
   {
       int reverse = reverseTheNumber(a[i]);
       if(a[i] != reverse)
       return 0;
   }
   return 1;
    }