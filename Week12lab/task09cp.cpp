#include<iostream>
using namespace std;

int identical(int elements[][3], int rows);

int main()
{
    int rows;
    cout << "Enter the number of rows for the array: ";
    cin >> rows;
    int elements[rows][3];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter element at position [" << i << "]" << "[" << j << "]: ";
            cin >> elements[i][j];
        }
    }
    int result = identical(elements, rows);
    cout << "The count of identical rows in the array is: " << result;
   
}

int identical(int elements[][3], int rows)
{
    int count = 0;
    for(int i = 0 ; i < rows ; i++)
    {
    for(int j = 0 ; j < 3 ; j++)
    {
        if(elements[j]==elements[j+1]&&elements[j]==elements[j+2])
        {
            count++;
        }
    }
    }
    return count;
}