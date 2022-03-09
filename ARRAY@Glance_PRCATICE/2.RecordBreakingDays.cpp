#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    arr[n] = -1;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    if(n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }

    int maximum =INT_MIN;
    int count= 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] >maximum && arr[i] >arr[i+1])
        {
            count++;
        }
        maximum = max(maximum, arr[i]);
    }


    cout<<count<<endl;
    return 0;
}


    