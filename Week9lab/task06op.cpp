#include <iostream>
using namespace std;

int findLargestNumber(int n, int array[]);
main() {
  int n;
  cout << "Enter the number of elements: ";
  cin >> n;

  int array[n];
  cout << "Enter "<<n<<" numbers, one per line:" << endl;
  for (int i = 0; i < n; i++) {
    cin >> array[i];
  }
  int largestNumber = findLargestNumber(n, array);
  cout << "The largest number entered is: " << largestNumber << endl;
}
int findLargestNumber(int n, int array[]) 
{
  int largestNumber = array[0];
  for (int i = 1; i < n; i++) {
    if (array[i] > largestNumber) {
      largestNumber = array[i];
    }
  }
  return largestNumber;
}

