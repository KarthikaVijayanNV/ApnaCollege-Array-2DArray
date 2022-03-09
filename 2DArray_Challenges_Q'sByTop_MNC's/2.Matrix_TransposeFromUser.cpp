#include<iostream>   // matrix transpose...getting the square matrix from the user
using namespace std;
   
int main()
{ 
    int n;   // because it is square matrix   eg: n=3...means 3*3 matrix
    cout<<"Eneter the n for N*N Matrix:"<<endl;
    cin>>n;
    // getting the N*N matrix from the user
    int arr[n][n]; 
    for(int i=0; i<n; i++)
    {
       for(int j=0; j<n; j++)
       {
           cin>>arr[i][j];
       }
    }

    cout<<"The matrix transpose is:"<<endl;
    // code for transpose
     for(int i=0; i<n; i++)
    {
       for(int j=i; j<n; j++)   // j=i shows that we are not traversing the entire matrix
       {
           //Swap
           int temp = arr[i][j];
           arr[i][j] = arr[j][i];
           arr[j][i] = temp;
       } 
    }

    for(int i=0; i<n; i++)
    {
       for(int j=0; j<n; j++)
       {
           cout<<arr[i][j]<<" ";
       }
       cout<<endl;
    }

    return 0;
} 