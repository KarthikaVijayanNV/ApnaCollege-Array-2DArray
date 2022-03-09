#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    const int N= 1000;
    int indexArr[N];

    for(int i=0; i<N; i++)
    {
        indexArr[i] =-1;
    }


    int minimum = INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(indexArr[arr[i]] != -1)
        {
            minimum = min(minimum,indexArr[arr[i]]);
        }
        else
        {
            indexArr[arr[i]] = i;
            
        }
    }

    if(minimum == INT_MAX)
    {
        cout<<"-1";
    }
    else
    {
        cout<<minimum+1<<endl;
    }

    
    return 0;
}