 void sortColors(vector<int>& nums) {
        int n =nums.size();
        int l=0,m=0,h=n-1;
        while(l<=h){
             if(nums[l]==0)
            {
                swap(nums[l],nums[m]);
                l++, m++;
            }
            else if(nums[l]==2)
            {
                swap(nums[l],nums[h]);
                h--;//we will not increase l here as 0 can be present at l position
            }
           
            else{
                l++;   
            }
        }
    }