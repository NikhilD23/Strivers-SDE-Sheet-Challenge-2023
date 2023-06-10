#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>>ans;
    vector<long long int>v1{1};
    vector<long long int>v2{1,1};
    if(n==1)
    {
      ans.push_back(v1);
      return ans;
    }

    else if(n==2)
    {
      ans.push_back(v1);
      ans.push_back(v2);
      return ans;
    }

    else
    { 
      vector<long long int>temp;
      ans.push_back(v1);
      ans.push_back(v2);
      
      for(int i=0;i<n-2;i++)
      {
        temp.push_back(1);
        long long int x = ans.size();
        for(int j=0;j<ans[x-1].size()-1;j++)
        {
          temp.push_back(ans[x-1][j]+ans[x-1][j+1]);
        }
        temp.push_back(1);
        ans.push_back(temp);
        temp.clear();
  
      }
    }

    return ans;


  
}
