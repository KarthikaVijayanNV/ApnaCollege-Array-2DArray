#include<iostream>    // Selection sort >> finding the minimum element in an unsorted array and 
using namespace std;  // swapping it with the element in the begining

int main ()
{
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
  
  int arr[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }


     for(int i=0; i<n-1; i++)
     {
         for(int j=i+1; j<n; j++)
         {
             if(arr[j]<arr[i])
             {
                 int temp=arr[j];
                 arr[j]=arr[i];
                 arr[i]=temp;
             }
         }
     }


     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }
   return 0;

}
     