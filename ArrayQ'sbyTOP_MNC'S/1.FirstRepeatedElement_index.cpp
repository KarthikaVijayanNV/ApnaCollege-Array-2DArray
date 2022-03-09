#include<bits/stdc++.h> // Index value of that element..who is repeated more than once(there can be many element) 
                         //                         but index of 1st occurance is smallest. 
using namespace std;
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

    const int N = 1000; //in the lecture it has given N=1e6+2 (1000002)index array is gonna be a big array ..so Number of elements are put max >> N
    int indexArray[N];

    for(int i=0; i<N; i++)
    {
        indexArray[i]= -1;
    }

    int MinimumIndex = INT_MAX;  // minimum variable  assigned by maximum available interger value.
    
     for(int i=0; i<n; i++)
    {
        if(indexArray[arr[i]] != -1)
        {
            MinimumIndex = min(MinimumIndex, indexArray[arr[i]]); // minimization is ta king place
        }
        else    // if the index array is still -1....then 
        {
            indexArray[arr[i]] = i;  //  putting the index i into indexArray
        }
       
    }

    if(MinimumIndex == INT_MAX)  // no  logic operation took place ...
    {
        cout<<"-1 "<<endl;
    } 
    else
    {
        cout<<MinimumIndex + 1<<endl;  // why +1??? output will be read in such a way that>> array index starts from one 
    }

   return 0;
}