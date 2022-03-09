#include<iostream>  
#include<climits>    // sum of each subarrays.......
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
 
    for(int i=0; i<n; i++)
    {
        int currentsum=0;
        for(int j=i; j<n; j++)
        {
            currentsum = currentsum+arr[j];
            cout<<currentsum<<endl;
        }
     cout<<endl;
      
    }

    return 0;
}