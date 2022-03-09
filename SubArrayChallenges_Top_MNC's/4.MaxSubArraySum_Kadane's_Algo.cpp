#include<iostream>   // kedane's algorithm to find maximum subarray sum = best case approach 
#include<climits>    // time complexity will be 0(n)......
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

     int sum=0;
     int maxSum=INT_MIN;
    for(int i=0; i<n; i++)
    {
        sum=sum+arr[i];
        if(sum<0)     // if sum is becoming -ve then make it 0
        {
            sum =0;
        }
        maxSum = max(maxSum,sum);

    }
    cout<<maxSum<<endl;
    return 0;
}