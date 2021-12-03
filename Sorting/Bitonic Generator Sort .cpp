/*
Input: N = 8
arr[] = {0, 1, 2, 3, 4, 5, 6, 7}
Output: 0 2 4 6 7 5 3 1
Explanation: 
Even-place elements : 0, 2, 4, 6
Odd-place elements : 1, 3, 5, 7
Even-place elements in increasing order : 
0, 2, 4, 6
Odd-Place elements in decreasing order : 
7, 5, 3, 1
*/

void bitonicGenerator(int arr[], int n)
	{
		// Your code goes here
		vector<int> v1;
		vector<int> v2;
		for(int i=0;i<n;i++){
		    if(i%2==0){
		        v1.push_back(arr[i]);
		    }else{
		        v2.push_back(arr[i]);
		    }
		}
		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end(),greater<int> ());
		int k=0;
		for(int i=0;i<v1.size();i++){
		    arr[k++]=v1[i];
		}
        
        for(int i=0;i<v2.size();i++){
            arr[k++]=v2[i];
        }
	}