
/*
Input:
S = "1324"
Output: "4312"
Explanation: Largest even number: 4312
*/

 string LargestEven(string S){
        //complete the function here
        sort(S.begin(),S.end(),greater<int>());
         int len=S.length();
         for(int i=len-1;i>=0;i--)
         {
             if((int)S[i]%2==0)
             {
                 swap(S[i],S[len-1]);
                 break;
             }
         }
         sort(S.begin(),S.begin()+len-1,greater<int>());
         return S;
    }  

 //   Expected Time Complexity: O(|S| * log |S|)
//  Expected Auxiliary Space: O(1)