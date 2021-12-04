
/*
Given an array A of N length. We need to calculate the next greater element for each element in a given array. If the next greater element is not available in a given array then we need to fill ‘-10000000’ at that index place.

Example 1:

Input : arr[ ] = {13, 6, 7, 12}
Output : _ 7 12 13 
Explanation:
Here, at index 0, 13 is the greatest value 
in given array and no other array element 
is greater from 13. So at index 0 we fill 
'-10000000'.
*/
int* greaterElement(int arr[], int n)
{
    // Complete the function
     set<int>s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        auto it=s.find(arr[i]);
        it++;
        if(it!=s.end())
            arr[i] = *it;
        else
            arr[i] = -10000000;
    }
    
    return arr;
}

// Expected Time Complexity: O(N*LOG(N)).
// Expected Auxiliary Space: O(N).

 