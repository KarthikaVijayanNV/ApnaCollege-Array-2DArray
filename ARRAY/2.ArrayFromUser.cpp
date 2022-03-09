#include<iostream>
using namespace std;
   
int main()
{ 
    int n;
    cout<<"Enter n:";
    cin>>n;

    int array[n];

    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    cout<<"Array elements are:"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
} 