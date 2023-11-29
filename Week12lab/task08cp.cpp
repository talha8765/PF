#include<iostream>
using namespace std;

int main()
{
    int rowSize;
    cout << "Enter row size: ";
    cin >> rowSize;
    int elements[rowSize][5];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Enter element at position [" << i << "]" << "[" << j << "]: ";
            cin >> elements[i][j];
        }
    }
    cout<<endl;
    cout << "Original Matrix: " << endl;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << elements[i][j] << " ";
        }
        cout << endl;
    }

    // Find the column with the largest sum
    int maxSum = 0;
    int maxSumColumn = 0;
    for (int j = 0; j < 5; j++)
    {
        int sum = 0;
        for (int i = 0; i < rowSize; i++)
        {
            sum += elements[i][j];
        }
        if (sum > maxSum)
        {
            maxSum = sum;
            maxSumColumn = j;
        }
    }

    // Swap the entries of the first column and the column with the largest sum
    for (int i = 0; i < rowSize; i++)
    {
        int temp = elements[i][0];
        elements[i][0] = elements[i][maxSumColumn];
        elements[i][maxSumColumn] = temp;
    }
    cout<<endl;
    cout << "Matrix after largest column moved to first: " << endl;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << elements[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}