#include<iostream>    // getting input and output in a Matrix
using namespace std;
int main()
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

    cout<<"The 2D array or Matrix is: "<<endl;
     for(int i=0; i<n; i++)     // for output
    {
        for(int j=0; j<m; j++)
        {
            cout<<arr[i][j]<<" ";    // for space after each element
        }
        cout<<endl;       // for moving to the next row
    }


    return 0;
}