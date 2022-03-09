#include<iostream>   // length of longest arithmetic subarray eg: [1,0,2,4,6,8,11]
using namespace std; //              longest arithmetic subarray=[2,4,6,8] length =4 ...o/p = 4
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

    int defaultlength = 2;
    int prevCommondiff = arr[1]-arr[0];
    int currentlength = 2;

    for (int i=2;i<n;i++)
    {
        if(prevCommondiff == arr[i]-arr[i-1])
        {
             currentlength ++;
        }
        else
        {
            prevCommondiff = arr[i]-arr[i-1];
            currentlength =2;
        }
        
        defaultlength =max(defaultlength,currentlength);
    }

    cout<<defaultlength;

    return 0;


}
