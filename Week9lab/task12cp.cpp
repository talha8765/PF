#include<iostream>
using namespace std;

bool isSpecialArray(int arr[], int size);
main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter "<<size<<" elements of the array:"<<endl;
    for(int i = 0 ; i < size ; i++)
    {
        cin>>arr[i];
    }
    bool result=isSpecialArray(arr,size);
    if(result==true)
    {cout<<"The array is special";}
    else
    {cout<<"The array is not special";}
}
bool isSpecialArray(int arr[], int size)
{
   if (size == 0) {
    return false;
  }
  bool result;
  for (int i = 0; i < size; i+=2) 
   {
      if (arr[i] % 2 == 0) {
        result= true;
      }
     else {
        return false;
      }
    }
  for(int i  = 1; i < size; i+=2)
  {
      if(arr[i] % 2 ==1){
        result = true;
      }
      else
      {return false;}
  }
  return result;
}


