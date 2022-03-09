#include<iostream>  
#include<climits>    // printing maximum subarray sum
using namespace std;

int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int maxsum = INT_MIN;  
    for(int i=0; i<n; i++)
    {
        int currentsum=0;
        for(int j=i; j<n; j++)
        {
            currentsum = currentsum+arr[j];
        }
        maxsum = max(maxsum,currentsum);
      
    }
    cout<<maxsum;

    return 0;
}