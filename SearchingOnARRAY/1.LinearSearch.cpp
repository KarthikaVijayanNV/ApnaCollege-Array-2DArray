#include<iostream>      // linear search...searching for a particular key 
using namespace std;

// Time complexity of linear search is o(n)

 int linearSearch(int arr[],int n,int key)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == key)
        return i; 
    }
    return -1;
}
   
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

    int key;
    cout<<"Enter the key to be searched:"<<endl;
    cin>>key;
    cout<<linearSearch(arr,n,key);
    
    
    return 0;

}   