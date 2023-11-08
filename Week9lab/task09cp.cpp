#include<iostream>
using namespace std;

bool canPayWithChange(int change[], double totalDue); 
main() {
  int change[4];

  cout << "Enter quarters: ";
  cin >> change[0];

  cout << "Enter dimes: ";
  cin >> change[1];

  cout << "Enter nickels: ";
  cin >> change[2];

  cout << "Enter pennies: ";
  cin >> change[3];

  double totalDue;
  cout << "Enter the total amount due: $";
  cin >> totalDue;
  cout<<"Can you pay the amount? ";
  bool final=canPayWithChange(change,totalDue);;
  if (final==true) {
    cout << "Yes" << endl;
  } 
  else
  {
    cout << "No" << endl;
  }
}
bool canPayWithChange(int change[], double totalDue) {

  float quarters = change[0] * 0.25;
  float dimes = change[1] * 0.10;
  float nickels = change[2] * 0.05;
  float pennies = change[3] * 0.01;
  double totalChange = quarters + dimes + nickels + pennies;
  double g = totalChange - totalDue;
  bool final;
  if(g>=0)
  {final = true;}
  else
  {final = false;}
  return final;
}