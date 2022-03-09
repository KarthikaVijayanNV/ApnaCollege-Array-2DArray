#include<iostream>  // Maximum circular subarray Sum
#include<climits>
using namespace std;

int kedanes(int arr[],int n)
{
    int sum= 0;
    int Maximum=INT_MIN;
    for(int i=0; i<n; i++)
    {
        sum =sum+arr[i];
        if(sum<0)
        {
            sum=0;
        }
     Maximum =max(Maximum,sum);
    }
    return Maximum;
}

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

    int nonwrapSum;    
    int wrapSum;

    nonwrapSum = kedanes(arr,n);   // nonwrapsum is there at kedans....go to kedans function


     int totalSum =0;             // these code is for finding wrapsum
    for(int i=0; i<n; i++)
    {
       totalSum = totalSum +arr[i];
       arr[i]= -arr[i];    // changing the sign of entire array...and putting it in kedans to find non-contributing element
    }

    wrapSum = totalSum + kedanes (arr,n);       // putting the sign changed array into kedans for non-contributing element 
                                          // total sum - -(kedanes element) // minus of minus become +
    cout<<max(nonwrapSum,wrapSum);
    
    return 0;
    
}