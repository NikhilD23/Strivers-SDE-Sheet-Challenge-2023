string kthPermutation(int n, int k) {
    // Write your code here.
    string ans="";
    int fact=1;
    vector<int>nums;
    for(int i=1;i<=n;i++)
        nums.push_back(i);

    for(int i=1;i<n;i++)
        fact=fact*i;

    k=k-1;

    while(true)
    {
        ans+=to_string(nums[k/fact]);
        nums.erase(nums.begin()+k/fact);

        if(nums.size()==0)
            break;

        k=k%fact;
        fact=fact/nums.size();
    }

    return ans;


}
