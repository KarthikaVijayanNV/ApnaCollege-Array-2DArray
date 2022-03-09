#include<iostream>     // Pair sum problem (array need not to be sorted)
using namespace std;   // brut force approach ..time comp 0(n2)

bool pairsum(int arr[],int n,int k)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n ;j++)
        {
            if(arr[i]+arr[j] == k)
            {
                cout<<i<<" "<<j<<endl;
                return true;            // if pair present then gives 1
            }
        }
    }
    return false;   //if not present then gives 0
}


int main()
{
    int n; 
    cout<<"enter n:"<<endl;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter k:" <<endl;
    cin>>k;

    cout<<pairsum(arr,n,k)<<endl;
    
    return 0;


}
