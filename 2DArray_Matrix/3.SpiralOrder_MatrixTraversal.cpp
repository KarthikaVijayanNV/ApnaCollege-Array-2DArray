#include<iostream>    // Spiral order Matrix traversal
using namespace std;
signed  main() // instead of int we can use signed also(data type modifiers ...both 4 bytes)
{
    int n,m;
    cout<<"enter n and m:"<<endl;
    cin>>n>>m;
    
    int arr[n][m];
    for(int i=0; i<n; i++)       // for input
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Spiral order printing of the array:" <<endl;

    int row_start =0, row_end =n-1, col_start =0, col_end =m-1;

    while(row_start <= row_end && col_start <= col_end)     // Spiral order printing
    {
        // row_start traversal
        for(int col=col_start; col<=col_end; col++)
        {
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;

        //col_end traversal
        for(int row=row_start; row<=row_end; row++)
        {
            cout<<arr[row][col_end]<<" ";
        }
        col_end--;




        if(row_start <= row_end)  // corrected code  ...this one new line added
        {
            //row_end traversal
            for(int col=col_end; col>=col_start; col--)
           {
            cout<<arr[row_end][col]<<" ";
           }
        }
        row_end--;
 

         if(col_start <= col_end)       // corrected code..this new line added.
        {
             //col_start traversal
            for(int row=row_end; row>=row_start; row--)
           {
            cout<<arr[row][col_start]<<" ";
           }
        
        }
        col_start++;
    }
  
  return 0;
}