#include<iostream>  // getting the input and printing the output ...and accessing indeces
using namespace std;
int main()
{
    char arr[100];       // declaring a bigger array
    cout<<"Enter the character:"<<endl;
    cin>>arr;                            // getting the input
    
    cout<<arr<<endl;     //printing the i/p
    cout<<arr[3]<<endl;  // accessing the index 3 th element

    return 0;

}
