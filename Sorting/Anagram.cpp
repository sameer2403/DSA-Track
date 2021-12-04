/*
An anagram of a string is another string that contains the 
same characters, only the order of characters can be different.
 For example, “act” and “tac” are an anagram of each other.

Example 1:

Input:
a = geeksforgeeks, b = forgeeksgeeks
Output: YES
Explanation: Both the string have same
characters with same frequency. So, 
both are anagrams.
*/
 bool isAnagram(string a, string b){
        
        // Your code here
        unordered_map<char, int>M;
        int n1=a.size();
        int n2= b.size();
        if(n1!=n2)
        {
            return false;
        }
        for(int i=0; i<n1;i++)
        {
            if (M.find(a[i]) == M.end())
        {
            M.insert(make_pair(a[i], 1));
        }
        else
        {
            M[a[i]]++;
        }
            
        }
         for(int i=0; i<n2;i++)
        {
           if (M.find(a[i]) != M.end())
             M[b[i]]--;
            
        }
       bool flag = true;
        
        for(int i = 0;i<n1;i++){
            if(a[i] != 0){
                flag = false;
                break;
            }
        }
        return flag;
        
    }

    // Expected Time Complexity: O(|a|+|b|).
    // Expected Auxiliary Space: O(Number of distinct characters).