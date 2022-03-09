#include<iostream>     // Along with the length largest word in the sentence ..printing that  word also
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
    int startIndx =0, startindxOfMax =0;
    while(1)   // as long as the condition of arr[i] == '\0' this loops goes on...(till all the condition stay true)
    { 
        if(arr[i] == '\0'  || arr[i] == ' ')
        {
            if(CurrentLen > MaxLen)
            {
                MaxLen = CurrentLen;
                startindxOfMax = startIndx ; // after couple of iterations startInx will be holding the last index value of Maxword
            }
            CurrentLen = 0;
            startIndx = i+1;      // see this one is getting updated according to the condition
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
  
  
  cout<<MaxLen<<endl;   // for printing the length of maxword
  // for printing the maxword
  for(int i=0; i<MaxLen; i++)
  {
      cout<<arr[i+startindxOfMax];   // 0+startindex= startindex  , 1+startindex = stratindex +1.....till the i<maxlen
  }

  return 0;

}