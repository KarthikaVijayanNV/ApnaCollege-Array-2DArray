#include<bits/stdc++.h>  // smallest missing element in an array 
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

    const int N = 1e6+2  ;
    bool checkArray[N]; 
    for(int i=0; i<N; i++)
    {
        checkArray[i] = false;
    }


    for(int i=0; i<n; i++)
    {
        if(arr[i] >= 0)
        {
            checkArray[arr[i]] = true;
        }
    }

    int ans = -1;   // question is to find the smallest +ve integer

    for(int i=1; i<N; i++)
    {
        if(checkArray[i] == false)
        {
            ans = i;
            break;  
        }         // immediately break  the loop when it encounter the first false(1st missing element)
    }

    cout<<ans<<endl;

     return 0;   
}