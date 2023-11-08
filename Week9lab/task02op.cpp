#include<iostream>
using namespace std;

void Reverse(string str);
main(){
   
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    Reverse(str);

}
void Reverse(string str) {

  cout<<"Reversed String: ";  
  for (int i = str.size() ; i >= 0; i--) {
    cout<<str[i];
   }
}
