#include<iostream>   // matrix multiplication
using namespace std; // M1=n1*n2   M2=n2*n3        Ans=n1*n3
   
int main()
{
    int n1,n2,n3; 
    cout<<"Enter n1,n2,n3:"<<endl;
    cin>>n1>>n2>>n3;

    int M1[n1][n2];
    int M2[n2][n3];

    // M1 first matrix of n1*n2
    cout<<"Enter the M1 matrix: "<<endl;
    for(int i=0; i<n1; i++)
    {
       for(int j=0; j<n2; j++)
       {
          cin>>M1[i][j];
       }
    }

    // M2 second matrix of n2*n3
    cout<<"Enter the M2 Matrix: "<<endl;
    for(int i=0; i<n2; i++)
    {
       for(int j=0; j<n3; j++)
       {
          cin>>M2[i][j];
       }
    }
    // For answere matrix  ...initializing 0 in all rows and columns
    int ans[n1][n3];
    for(int i=0; i<n1; i++)
    {
       for(int j=0; j<n3; j++)
       {
           ans[i][j] = 0;
       }
    }
      

     // Matrix Multiplication
     for(int i=0; i<n1; i++)    // moving through M1's row
    {
       for(int j=0; j<n3; j++) // moving through M2 's columns
       {
           for(int k=0; k<n2; k++)// each and every element of (M1's row and M2's col   which  is n2)
           {
              ans[i][j] = ans[i][j] + M1[i][k] * M2[k][j] ;
           }
       }
    } 

    cout<<"The matrix Multiplication is: " <<endl;
    // print the ans Matrix
    for(int i=0; i<n1; i++)
    {
       for(int j=0; j<n3; j++)
       {
           cout<<ans[i][j]<<" " ;
       }
       cout<<endl;
    }
     

     return 0;
}