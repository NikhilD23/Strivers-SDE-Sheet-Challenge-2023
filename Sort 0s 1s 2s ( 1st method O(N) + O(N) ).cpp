#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int countofzeros=0,countofones=0,countoftwos=0;
   for(int i=0;i<n;i++)
   {
      if(arr[i]==0)
         countofzeros++;
      
      else if(arr[i]==1)
         countofones++;

      else
         countoftwos++;
   }

   int x=0;
   while(countofzeros!=0)
   {
      arr[x]=0;
      countofzeros--;
      x++;
   }

   while(countofones!=0)
   {
      arr[x]=1;
      countofones--;
      x++;
   }

   while(countoftwos!=0)
   {
      arr[x]=2;
      countoftwos--;
      x++;
   }
}