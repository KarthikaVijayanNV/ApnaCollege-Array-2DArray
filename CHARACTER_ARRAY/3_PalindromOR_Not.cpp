#include<iostream> // checking a word is palindrom or not
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the word:"<<endl;
    cin>>n;

    char arr[n+1];     // because the last index should be '\0'
    cout<<"Enter the word: "<<endl;
    cin>>arr;

    bool flag = true;
    for(int i=0; i<n; i++)
    { 
        if(arr[i] != arr[n-1-i])   // n-1-i  is given for reaching the elements in the last positions of the array
        {
            flag = false;
            break;
        }
    }

    if(flag == true)
    {
       cout<<"The word is palindrom:"<<endl;
    }
    else
    {
        cout<<"The word is not a palindrom:"<<endl;
    }

   return 0;
}