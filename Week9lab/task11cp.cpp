#include <iostream>
using namespace std;

string removeVowels(string str) {
  string newStr;
  for (char c : str) {
    if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'A' && c != 'E' &&  c != 'I' && c != 'O' && c != 'U'  ) {
      newStr += c;
    }
  }
  return newStr;
}

main() {
  string str;
  cout << "Enter a string: ";
  getline(cin,str);

  string newStr = removeVowels(str);

  cout << "String with vowels removed: " << newStr << endl;
}