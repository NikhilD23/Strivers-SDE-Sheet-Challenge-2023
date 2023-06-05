#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long max_till_here=0,max_till_now=0;
    for(int i=0;i<n;i++)
    {
        max_till_here+=arr[i];
        if(max_till_here>max_till_now)
            max_till_now=max_till_here;
        
        if (max_till_here < 0) {
             max_till_here = 0;
        } 

      
    }

    return max_till_now;

}