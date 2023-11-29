#include<iostream>
using namespace std;

void printCars(int cars[][5],int rowSize);

main(){
    const int rowSize = 5;
    const int colSize = 5;
    int cars[rowSize][colSize]={{10,7,7,7,8},{2,3,4,4,5},{4,5,6,7,8},{3,4,4,4,5},{4,5,6,9,0}};
    printCars(cars,rowSize);
}
void printCars(int cars[][5],int rowSize)
{
    for(int row = 0 ; row < rowSize ; row++)
    {
        for(int col = 0 ; col < 5 ; col++)
        {
            cout<<cars[row][col]<<"\t";
        }
        cout<<endl;
    }
}
