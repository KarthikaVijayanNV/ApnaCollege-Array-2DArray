#include<iostream>   // eg: 1, 2, 0,7,2,0,2,2 no:of record breaking days= 2 ...o/p = 2
using namespace std;
int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;

     int arr[n+1];
     arr[n]=-1;      // or u can initialise arr[i] = INT_MIN  minimum interger

    for(int i=0; i<n; i++)
    {
         cin>>arr[i];
    }


    if(n==1)       // if there  is only one day
    {
       cout<<"1"<<endl;
       return 0;
    }


     int count  = 0;
     int maximum=-1;   // or u can initialise maximum=INT_MIN  it's your choice
     for(int i=0; i<n; i++)
    {
        if(arr[i]>maximum && arr[i]>arr[i+1])
        {
           count++;
        }
        maximum=max(maximum,arr[i]);   // each time u are finding the maximum element
    }

    cout<<count<<endl;
    return 0;

}