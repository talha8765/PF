#include<iostream>
using namespace std;

string checker(string word);
main(){
    string word;
    cout<<"Enter a String: ";
    getline(cin,word);
    cout<<"Shifted String: "<<checker(word);
}
string checker(string word) {
  for (int i = 0; i < word.length(); i++) {
    char c = word[i];
    if (c >= 'a' && c < 'z') {
      c++;
    } else if (c >= 'A' && c < 'Z') {
      c++;
    } else if (c == 'z') {
      c = 'a';
    } else if (c == 'Z') {
      c = 'A';
    }
    word[i] = c;
  }
  return word;
}