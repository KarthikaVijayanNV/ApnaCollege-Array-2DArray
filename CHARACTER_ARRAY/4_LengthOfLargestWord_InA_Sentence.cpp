#include<iostream>     // length of the largest word in a sentence
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the sentence:  "<<endl;
    cin>>n;

    cin.ignore();   // to clear the buffer which may created by the usage of getline function in coming lines
    char arr[n+1];
    cout<<"Enter the sentence: "<<endl;
    cin.getline(arr,n);  // otherwise u can't input a sentence
    cin.ignore();    // to clear the buffer which is been created by the usage of getline() function
                     // u can also use fflush() for clearing  the buffer
    int CurrentLen=0, MaxLen=0;
    int i=0;
    while(1)   // as long as the condition of arr[i] == '\0' this loops goes on...
    { 
        if(arr[i] == '\0'  || arr[i] == ' ')
        {
            if(CurrentLen > MaxLen)
            {
                MaxLen = CurrentLen;
            }
            CurrentLen = 0;
        }
        
      else 
      {

          CurrentLen++;      //it will get increased until arr[i] encounters a null character '\0'
      }  
      
      if(arr[i] == '\0')
          {
            break;
          }
      
      i++;
    }
  cout<<MaxLen<<endl;

  return 0;

}