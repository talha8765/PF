#include<iostream>
using namespace std;

int printSum(int elements[][3],int rowSize);
main()
{
    int rowSize;
    cout<<"Enter row size: ";
    cin>>rowSize;
    int elements[rowSize][3];
    cout<<"Enter the elements of the matrix:"<<endl;
    for(int i = 0 ; i < rowSize ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            cout<<"Enter element at position ["<<i<<"]"<<"["<<j<<"]"<<": ";
            cin>>elements[i][j];
        }
    }
    int result = printSum(elements,rowSize);
    cout<<"The sum of elements in the matrix is: "<<result;
}
int printSum(int elements[][3],int rowSize)
{
    int sum = 0 ;
    for(int i = 0 ; i < rowSize ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
        sum+=elements[i][j];
        }
    }
    return sum;
}
