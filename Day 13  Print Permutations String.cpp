#include <bits/stdc++.h>

void solve(int ind, vector<string> &ans, string s)
{
    if(ind==s.length())
    {
        ans.push_back(s);
        return;
    }
    


    for(int i=ind;i<s.length();i++)
    {
        swap(s[ind],s[i]);
        solve(ind+1,ans,s);
        swap(s[ind],s[i]);  
    }
    
}


vector<string> findPermutations(string &s) {
    // Write your code here.
    vector<string>ans;
    solve(0,ans,s);
    return ans;
}