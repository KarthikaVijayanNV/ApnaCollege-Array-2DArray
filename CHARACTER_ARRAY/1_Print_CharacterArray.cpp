#include<iostream>  // simply printing a character array
using namespace std;
int main()
{
    char arr[100] = "Apple";
   
    int i =0;
    while(arr[i] != '\0')
    {
        cout<<arr[i]<<endl;
        i++;
    }

    return 0;
}