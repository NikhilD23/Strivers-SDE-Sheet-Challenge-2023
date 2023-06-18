#include <bits/stdc++.h> 


void fn(int ind, vector<int> arr, int n,vector<vector<int>> &ans, vector<int> &ds)
{   
  
    ans.push_back(ds);
    
    for(int x=ind;x<n;x++)
    {
        if(x!=ind && arr[x]==arr[x-1])
            continue;
        ds.push_back(arr[x]);
        fn(x+1,arr,n,ans,ds);
        ds.pop_back();
    }
}


vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    vector<vector<int>>ans;
    vector<int>ds;
    sort(arr.begin(),arr.end());
    fn(0,arr,n,ans,ds);
    return ans;
}