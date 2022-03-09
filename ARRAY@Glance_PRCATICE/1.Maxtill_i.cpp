#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }


    int maximum =INT_MIN;

    for(int i=0; i<n; i++)
    {
        maximum = max(maximum,arr[i]);
        cout<<maximum<<endl;

    }

    return 0;


}