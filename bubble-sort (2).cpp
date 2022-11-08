#include <iostream>
#define s 10
using namespace std;

int main()
{
  int arr[s]={10,30,35,26,19,15,38,6,32,12};

  for(int i=0;i<s;i++)
  {
      for(int j=i+1;j<s;j++)
      {
          if(arr[j]<arr[i])
          {
              int temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
          }
      }
  }
  for(int i=0;i<s;i++)
  {
      cout<<arr[i]<<" ";
  }
  return 0;
}
