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
    bool checkarray[N];

    for(int i=0; i<N; i++)
    {
       checkarray[i] =false;
    }


    for(int i=0; i<n; i++)
    {
        if(arr[i] >=0)
        {
            checkarray[arr[i]] = true;
        }
    }
    int ans;
    for(int i=0; i<N; i++)
    {
        if(checkarray[i] == false)
        {
           ans = i;
           break;
        }
    }

    cout<<ans<<endl;

    return 0;
}