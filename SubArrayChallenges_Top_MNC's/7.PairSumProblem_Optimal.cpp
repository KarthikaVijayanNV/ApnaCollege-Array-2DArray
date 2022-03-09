#include<iostream>       // pair sum problem ...Array need to be sorted..if not u have to sort array first
using namespace std;   // time complexity  = 0(n)......if array not sorted then sorting complexity will also get added to this.

bool pairsum(int arr[],int n,int k)
{
    int low= 0;
    int high =n-1;

    while(low<high)
    {
        if(arr[low] + arr[high] == k)
        {
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high] < k)
        {
            low++;
        }
        else
        {
            high--;
        }
    }
    return false;  // if no pair is found
}
   
int main()
{ 
    int arr[]={2,4,7,11,14,16,20,21};  // directly giving a sorted array
    int k=31;                          // directly giving k 
    
    cout<<pairsum(arr,8,k);

    return 0;
}