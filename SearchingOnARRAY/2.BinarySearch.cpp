#include<iostream>     // Binary search // performs only on sorted array (array should be in ascending order) 
using namespace std;//         
// space complexity     O(log n )  // log power n ..base 2 
                          
int BinarySearch(int arr[],int n, int key)
{
    int start=0;
    int end=n;

    while(start<=end)
    {
        int mid=(start+end) /2;

        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key:"<<endl;
    cin>>key;

    cout<<BinarySearch(arr,n,key);

    return 0;
}