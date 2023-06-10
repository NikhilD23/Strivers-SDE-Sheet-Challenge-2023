#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    // Write your code here 
    
    int m,r;    
    for(int i=0;i<n;i++)
    {   
        if(arr[abs(arr[i])-1]>0)
            arr[abs(arr[i])-1]=-1*arr[abs(arr[i])-1];

        else if(arr[abs(arr[i])-1]<0)
        {
            r = abs(arr[i]);
        }
        
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            m=i+1;
        }
    }
    
    pair<int,int>ans(m,r);
    return ans;
}
