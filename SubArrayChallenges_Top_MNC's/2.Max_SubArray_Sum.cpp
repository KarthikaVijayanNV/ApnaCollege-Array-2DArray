#include<iostream> // Printing Maximum subarray sum
#include<climits>
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
    int MaxSum =INT_MIN;

    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            int sum=0;
            for(int k=i; k<=j; k++)    // k<=j is very important ..because we have to print j also
            {
                sum = sum+arr[k];
            }
           MaxSum = max(MaxSum,sum);
        }
    }
    cout<<MaxSum;
    return 0;
}