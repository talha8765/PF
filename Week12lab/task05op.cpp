#include<iostream>
using namespace std;

bool identity(int elements[][3],int rowSize);

main()
{
    int rowSize=3;
    int elements[rowSize][3];
    cout<<"Enter the elements of the matrix:"<<endl;
    for(int i = 0 ; i < rowSize ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            cout<<"Enter element at position ["<<i<<"]"<<"["<<j<<"]: ";
            cin>>elements[i][j];
        }
    }
    cout<<"The matrix you entered is:"<<endl;
    for(int i = 0 ; i < rowSize ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            cout<<elements[i][j]<<"\t";
        }
        cout<<endl;
    }

    bool result = identity(elements,rowSize);
    if(result==true)
    {
        cout<<"The entered matrix is an identity matrix.";
    }
    else
    {
        cout<<"The entered matrix is NOT an identity matrix.";
    }
}
bool identity(int elements[][3],int rowSize)
{
    for(int i = 0 ; i < rowSize ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            if(elements[i][j]==1 && elements[i][j+1]==0 && elements[i][j+2]==0 && elements[i+1][j]==0 && elements[i+1][j+2]==0 && elements[i+2][j]==0 && elements[i+2][j+1]==0)
            {
                return true;
            }
        }
    }
    return false;
}
