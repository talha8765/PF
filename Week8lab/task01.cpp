#include<iostream>
using namespace std;

bool doesBrickFit(int hBrick,int wBrick,int dBrick,int wHole,int hHole);
main(){
    int hBrick;
    cout<<"Enter the height of the brick: ";
    cin>>hBrick;
    int wBrick;
    cout<<"Enter the width of the brick: ";
    cin>>wBrick;
    int dBrick;
    cout<<"Enter the depth of the brick: ";
    cin>>dBrick;
    int wHole;
    cout<<"Enter the width of the Hole: ";
    cin>>wHole;
    int hHole;
    cout<<"Enter the height of the Hole: ";
    cin>>hHole;
    bool result=doesBrickFit(hBrick,wBrick,dBrick,wHole,hHole);
    cout<<result;
}
bool doesBrickFit(int hBrick,int wBrick,int dBrick,int wHole,int hHole) {
  // Check if the brick is smaller than or equal to the hole in all dimensions.
  return ((hBrick < wHole && wBrick < hHole && dBrick < wHole) || (hBrick < hHole && wBrick < wHole && dBrick < hHole));
}