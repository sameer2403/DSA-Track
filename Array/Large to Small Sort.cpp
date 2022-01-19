Input
nums = [5, 2, 9, 3]
Output
[9, 2, 5, 3]
//..........................................................



vector<int> solve(vector<int>& nums) {
   
    int n= nums.size();
    sort(nums.begin(), nums.end());
    vector<int>v;
    int i=0; 
     int j=n-1;
     while(i<=j){
         v.push_back(nums[j]);
         j--;
         if(i<=j){
             v.push_back(nums[i]);
             i++;
         }
         
     }
   return v;
}