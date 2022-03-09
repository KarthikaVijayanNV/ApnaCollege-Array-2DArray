#include<iostream>   // matrix transpose (only be performed in an square matrix)
using namespace std;
   
int main()
{ 
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};   // u can code like u get the N*N matrix from the user

    for(int i=0; i<3; i++)
    {
       for(int j=i; j<3; j++)   // j=i shows that we are not traversing the entire matrix
       {
           //Swap
           int temp = arr[i][j];
           arr[i][j] = arr[j][i];
           arr[j][i] = temp;
       } 
    }

    for(int i=0; i<3; i++)
    {
       for(int j=0; j<3; j++)
       {
           cout<<arr[i][j]<<" ";
       }
       cout<<endl;
    }

    return 0;
} 