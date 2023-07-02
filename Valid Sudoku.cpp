bool isSafe(int row, int col, int matrix[][9], int i)
{
    for(int x=0;x<9;x++)
    {
        if(matrix[row][x]==i)
            return false;

        if(matrix[x][col]==i)
            return false;
        
        if(matrix[3*(row/3)+i/3][3*(col/3)+i%3]==i)
            return false;
    }

    return true;
}

bool solve(int matrix[][9])
{
    for(int row=0;row<9;row++)
    {
        for(int col=0;col<9;col++)
        {
            if(matrix[row][col]==0)
            {
                for(int i=1;i<=9;i++)
                {
                    if(isSafe(row,col,matrix,i))
                    {
                        matrix[row][col]=i;

                        if(solve(matrix)==true)
                            return true;
                        
                        else
                            matrix[row][col]=0;
                    }

                }

                return false;

            }


        }
    }

    return true;
}


bool isItSudoku(int matrix[9][9]) {
    // Write your code here.
    
    return solve(matrix);


}
