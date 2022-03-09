#include<iostream>   // Finding a sum array with given sum (o/p = position of start and end of subarray)
using namespace std;
int main()
{
    int n,S;    // S is the sum needed..by the user
    cout<<"Enter n:"<<endl;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
   
    cout<<"Enter the sum needed:"<<endl;
    cin>>S;

    int i=0, j=0, sum=0, start=-1, end=-1;

    while(j<n && sum+arr[j]<=S)   // here loop variable i is not at all using because subarray 
    {                              // u are getting will be strating from the o th index itself
        sum= sum+arr[j];           // only j is moving
        j++;
    }

    if(sum == S)
    {
        cout<<i+1<<" "<<j;  // giving the position out (from the 1st position till j)
        return 0;
    }


    while(j<n)        // here i and j loop variable are moving ...because subarray u are gettig will
    {                  // will be inbetween the original array
        sum= sum+arr[j];

       while(sum > S)
      {
           sum = sum - arr[i];
           i++;
      }
      if(sum == S)
      {
          start = i+1;    // giving position out
          end = j+1;      // giving position out
          break;
      }

     j++;
    }

    cout<<start<<" "<<end<<endl;
    return 0;


}
