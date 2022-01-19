Input:
N = 8, M = 5
A = {3, 4, 1, 9, 56, 7, 9, 12}
Output: 6
Explanation: The minimum difference between 
maximum chocolates and minimum chocolates 
is 9 - 3 = 6 by choosing following M packets :
{3, 4, 9, 7, 9}.
//...................................................................................//

long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    int i=0, j=m-1;
    long long mini =INT_MAX;;
    while(i<n && j<n){
    if(a[j]-a[i]<mini)
    mini =a[j]-a[i];
    i++;
    j++;
    }
    return mini;
    }   