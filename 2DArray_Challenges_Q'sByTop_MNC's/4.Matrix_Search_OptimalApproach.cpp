#include<iostream>   // searching a particular element is exists or not ..searching
using namespace std; // Matrix has to be sorted...for using this method....
   
int main()
{
    int n,m;
    cout<<"Enter n and m: "<<endl;
    cin>>n>>m;

    // Matrix input
    int Matrix[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>Matrix[i][j];
        }
    }
     // getting the key to be searched
    int key;
    cout<<"Enter the key: "<<endl;
    cin>>key;


    //Search 
    int row =0 , col=m-1;   //to reach the topmost element
    bool flag = false;      // just for a us to know whethe it's found or not for giving a flag
    while(row < n && col >= 0) // limiting the increase and decrease of row and col
    {
       if (Matrix[row][col] == key)
       {
           flag = true;
       }
       if (Matrix[row][col] < key)
       {
           row++;
       }
       else  // Matrix[row][col] >key
       {
           col --;
       }
       
    }  
    
    if(flag == true)
    {
        cout<<"Element found:"<<endl;
    }
    else
    {
        cout<<"Element does not exist: "<<endl;
    }

return 0;
}