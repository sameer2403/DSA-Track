// sol1 TC: O(N)
// Space Complexity : O(1)
int findKthPositive(vector<int> &arr, int k)
{
    for (auto a : arr)
        if (a <= k)
            k++;
    return k;
}

// sol2: Time Complexity : O (log(n)) // Number of array elements
// Space Complexity : O(1)
// No of missing numbers at index i = (Current Value at index i ) - ( Correct Value as per contiguous sequence )
//= A[i]-(i+1) // At any index i

int findKthPositive(vector<int> &A, int k)
{

    int low = 0;
    int high = A.size() - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        // A[m]-(m+1)   --> This gives umber of missing number before m'th index
        if (A[mid] - (1 + mid) < k)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low + k;
}
