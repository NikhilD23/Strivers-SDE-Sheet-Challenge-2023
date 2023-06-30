#include<bits/stdc++.h>

void fn(vector<string> &board, vector<vector<int>> &ans)
{
    vector<int>temp;
  for (int i = 0; i < board.size(); i++) {
    
    for(int j=0;j<board[i].length();j++)    
    {
        temp.push_back(int(board[i][j])-48);
    }
    
  }
  ans.push_back(temp);
}


bool isSafe(int row, int col, int n, vector<string> &board)
{   
    int rowtemp=row;
    int coltemp=col;
    while(col>=0)
    {
        if(board[row][col]=='1')
            return false;

        col--;
    }

    row=rowtemp;
    col=coltemp;

    while(row>=0 && col>=0)
    {
        if(board[row][col]=='1')
            return false;

        col--;
        row--;
    }

    row=rowtemp;
    col=coltemp;

    while(row<n && col>=0)
    {
        if(board[row][col]=='1')
            return false;

        col--;
        row++;
    }

    return true;



}

void solve(int col, int n, vector<string> &board, vector<vector<int>> &ans)
{
    if(col==n)
    {
        fn(board,ans);
        return;
    }

    for(int row=0;row<n;row++)
    {   
        if(isSafe(row,col,n,board))
        {
            board[row][col]='1';
            solve(col+1,n,board,ans);
            board[row][col]='0';
        }
    }

}


vector<vector<int>> solveNQueens(int n) {
    // Write your code here.
    vector<string>board(n);
    vector<vector<int>> ans;
    string str(n, '0');
    
    for(int i=0;i<n;i++)
        board[i]=str;

    // for(int i=0;i<board.size();i++)
    // {
    //     cout<<board[i]<<endl;

    // }

    solve(0,n,board,ans);
    return ans;
}