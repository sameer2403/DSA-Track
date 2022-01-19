Input: 
n = 5
A[] = {1, 2, 3, 3, 4}
[a, b] = [1, 2]
Output: 1
Explanation: One possible arrangement is:
{1, 2, 3, 3, 4}. If you return a valid
arrangement, output will be 1.
//....................................................................



 void threeWayPartition(vector<int>& array,int a, int b)
    {
        // code here 
         int n= array.size();
         int start = 0, end = n-1;
     
        for (int i=0; i<=end;)
        {
            if (array[i] < a)
                swap(array[i++], array[start++]);
            else if (array[i] > b)
                swap(array[i], array[end--]);
            else
                i++;
        }
       
    }