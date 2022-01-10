/*
Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].
*/
 vector<vector<int>> merge(vector<vector<int>>& intervals) {
         vector<vector<int>>res;
        if(intervals.size()==0)return res;
        sort(intervals.begin(),intervals.end());
        vector<int>temp=intervals[0];
        for(auto it: intervals){
            if( it[0] <= temp[1]){
                temp[1]= max(it[1], temp[1]);
            }
        else{
            res.push_back(temp);
            temp=it;
        }
        }
         res.push_back(temp);
        return res;
    }