#include<iostream>  // Minimum and maximum element in an array
#include<climits>
using namespace std;
   
int main()
{ 
    int n;
    cout<<"Enter n:";
    cin>>n;

    int array[n];

    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    int maxNo=INT_MIN;  //minimum integer possible in c++  // assigned minimum varibale>> then easy to compare
    int minNo=INT_MAX;  // maximum interger possibl in c++ // assigned maximum variable >> then easy to compare

    for(int i=0; i<n; i++)
    {
        maxNo=max(maxNo,array[i]);   // already we have built in function max to find max of 2
        minNo=min(minNo,array[i]);   // use built in function min to find min of 2
       
    }
    cout<<"Maximum "<<maxNo<<" "<<"minimum "<<minNo;

    return 0;
} 