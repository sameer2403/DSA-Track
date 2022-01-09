 int *findTwoElement(int *arr, int n) {
        // code here
         int *res=new int[2];
         unordered_map<int, int> m;
       for(int i=0;i<n;i++){
           m[arr[i]]++;
       }
       for(int i=0;i<n; i++){
           if(m[arr[i]]==2){
               res[0]=arr[i];
           }
           
           if(m[i+1]==0){
               res[1]=i+1;
           }
           
           }
       return res;
    }