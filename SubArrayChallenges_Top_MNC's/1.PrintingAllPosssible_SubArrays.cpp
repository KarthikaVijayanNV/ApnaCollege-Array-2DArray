#include<iostream> // Printing all possible subarrays
using namespace std;
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
     
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            for(int k=i; k<=j; k++)    // k<=j is very important ..because we have to print j also
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}