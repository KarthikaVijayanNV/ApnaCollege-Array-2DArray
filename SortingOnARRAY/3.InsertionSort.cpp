#include<iostream>    // Insertion sort - Insert an element from the unsorted array to it's correct
using namespace std; //                     position in sorted array
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


  for(int i=1; i<n; i++)    // i=1 because first element of array is always considered sorted
  {
      int current = arr[i];
      int j = i-1;
      while(arr[j]>current && j>=0)
      {
          arr[j+1]=arr[j];
          j--;
      }
      arr[j+1]=current;

  }

  for(int i=0;i<n;i++)
  {
      cout<<arr[i]<<" ";
  }
  
  return 0;
}