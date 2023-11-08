#include <iostream>
using namespace std;

void displayAlphabetLocations(char word[]);
main() {
  char word[100];

  cout << "Enter a word: ";
  cin >> word;

  displayAlphabetLocations(word);
}

void displayAlphabetLocations(char word[]) {
  int i = 0;
  while (word[i] != '\0') {
    if (word[i]) {
      cout << word[i] << " found at position " << i << endl;
    }
    i++;
  }
}

