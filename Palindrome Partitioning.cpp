#include <bits/stdc++.h> 

bool isPalindrome(string s, int i, int j)
{
    while(i<=j)
    {
        if(s[i]==s[j])
        {
            i++;
            j--;
        }

        else
        {
            return false;
        }


    }

    return true;
}

void solve(int ind, vector<vector<string>> &ans, string &s, vector<string> &ds)
{
    if(ind==s.length())
        {
            ans.push_back(ds);
            return;
        }


    for(int i=ind;i<s.length();i++)
    {
        if(isPalindrome(s,ind,i))
        {
            ds.push_back(s.substr(ind,i-ind+1));
            solve(i+1,ans,s,ds);
            ds.pop_back();
        }

    }


}

vector<vector<string>> partition(string &s) 
{
    // Write your code here.
    vector<vector<string>>ans;
    vector<string>ds;
    solve(0,ans,s,ds);
    return ans;
}