#include<iostream>    // searching for a particular element ...whether it's present or not
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
    int key;
    cout<<"Enter the key to be searched:"<<endl;
    cin>>key;
    bool flag =0;

    for(int i=0; i<n; i++)       // for input
    {
        for(int j=0; j<m; j++)
        {
            if(arr[i][j] == key)
            {
                cout<<i<<" "<<j<<endl;
                flag =true;
            }
        }
    }
    
    if(flag == true)
    {
        cout<<"Elemet is found:"<<endl;
    }
    else
    {
        cout<<"Element is not found:"<<endl;
    }

    return 0;
}