#include<iostream>  // max till i...tell u which is the maximum element till i?
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }


    int maximum =INT_MIN;  // use header file climits
    
    for(int i=0; i<n; i++)
    {
        maximum=max(maximum,arr[i]);
        cout<<maximum<<endl;          // each time u have to get the output ..that's y given inside the loop
    }

    return 0;
}