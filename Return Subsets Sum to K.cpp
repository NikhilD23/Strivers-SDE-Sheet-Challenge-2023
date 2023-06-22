void givesubset(int ind, vector<vector<int>>&ans, vector<int>&ds, int &sum, vector<int>arr, int k, int n)
{
    if(ind==n)
    {
      if (sum == k) {
        ans.push_back(ds); 
      }
      return;
    }

    ds.push_back(arr[ind]);
    givesubset(ind+1, ans, ds, sum+=arr[ind], arr,k,n);
    ds.pop_back();
    givesubset(ind+1, ans, ds, sum-=arr[ind], arr,k,n);
    
}


vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
    vector<vector<int>>ans;
    vector<int>ds;
    int sum=0;

    givesubset(0,ans,ds,sum,arr,k,n);
    return ans;
}


