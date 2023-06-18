#include <bits/stdc++.h>


void givesubsetsum(int ind,vector<int>num,vector<int> &ds, vector<int> &finalans, int &cursum)
{
    if(ind == num.size())
    {
        finalans.push_back(cursum);
        return;
    }

    ds.push_back(num[ind]);
    cursum+=num[ind];
    givesubsetsum(ind+1,num,ds,finalans,cursum);
    cursum-=num[ind];
    ds.pop_back();
    givesubsetsum(ind+1,num,ds,finalans,cursum);

}

vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    vector<int>finalans,ds;
    int cursum=0;
    givesubsetsum(0,num,ds,finalans,cursum);

    sort(finalans.begin(),finalans.end());
    return finalans;
}