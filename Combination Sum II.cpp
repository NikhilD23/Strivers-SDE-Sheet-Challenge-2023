#include<bits/stdc++.h>
void fn(int ind, vector<vector<int>> &ans, vector<int> &ds, int n, vector<int>arr, int target)
{
  if (target == 0) {
    ans.push_back(ds);
    return;
  }

    for(int i=ind;i<n;i++)
    {
        if(i!=ind && arr[i]==arr[i-1])
            continue;
        if(arr[i]>target)
            break;
        ds.push_back(arr[i]);
        fn(i+1,ans,ds,n,arr,target-arr[i]);
        ds.pop_back();
    }


}

vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target){
    // Write your code here.
    
    vector<vector<int>> ans;
    vector<int>ds;
    sort(arr.begin(),arr.end());
    
    fn(0,ans,ds,n,arr,target);
    return ans;    


}
