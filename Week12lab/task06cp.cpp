#include<iostream>
using namespace std;

string check(string coordinate,string symbol [5][5]);
main()
{
    string coordinate;
    string symbol [5][5]={
    {".", ".", ".", "*", "*"},
    {".", "*", ".", ".", "."},
    {".", "*", ".", ".", "."},
    {".", "*", ".", ".", "."},
    {".", ".", "*", "*", "."}};
    cout<<"Enter coordinates to fire torpedo (e.g., A1, B3, E5): ";
    cin>>coordinate;
    cout<<"Result: "<<check(coordinate,symbol);
}
string check(string coordinate,string symbol [5][5])
{
    string torpedo[5][5]={{"A1","A2","A3","A4","A5"},
                        {"B1","B2","B3","B4","B5"},
                        {"C1","C2","C3","C4","C5"},
                        {"D1","D2","D3","D4","D5"},
                        {"E1","E2","E3","E4","E5"}};

   for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (coordinate == torpedo[i][j])
            {
                if (symbol[i][j] == ".")
                {
                    return "splash";
                }
                else
                {
                    return "BOOM";
                }
            }
        }
    }
}
