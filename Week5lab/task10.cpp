#include <iostream>
#include <cmath>
using namespace std;

void text(int number);

main()
{
    int number;
    cout << "Enter a number (1-99): ";
    cin >> number;
    text(number);
}
void text(int number)
{
    int p = number;
    if (number >= 11 && number <= 19)
    {
        if (number == 11)
        {
            cout << "Eleven";
        }
        if (number == 12)
        {
            cout << "Twelve";
        }
        if (number == 13)
        {
            cout << "Thirteen";
        }
        if (number == 14)
        {
            cout << "Fourteen";
        }
        if (number == 15)
        {
            cout << "Fifteen";
        }
        if (number == 16)
        {
            cout << "Sixteen";
        }
        if (number == 17)
        {
            cout << "Seventeen";
        }
        if (number == 18)
        {
            cout << "Eighteen";
        }
        if (number == 19)
        {
            cout << "Nineteen";
        }
    }
    if (number >= 1 && number <= 99 && !((number >= 11 && number <= 19)))
    {
        number = number - number % 10;
        if (number == 20)
        {
            cout << "Twenty";
        }
        if (number == 30)
        {
            cout << "Thirty";
        }
        if (number == 40)
        {
            cout << "Forty";
        }
        if (number == 50)
        {
            cout << "Fifty";
        }
        if (number == 60)
        {
            cout << "Sixty";
        }
        if (number == 70)
        {
            cout << "Seventy";
        }
        if (number == 80)
        {
            cout << "Eighty";
        }
        if (number == 90)
        {
            cout << "Ninety";
        }
        number = p;
        number = number % 10;
        if (number == 1)
        {
            cout << "One";
        }
        if (number == 2)
        {
            cout << "Two";
        }
        if (number == 3)
        {
            cout << "Three";
        }
        if (number == 4)
        {
            cout << "Four";
        }
        if (number == 5)
        {
            cout << "Five";
        }
        if (number == 6)
        {
            cout << "Six";
        }
        if (number == 7)
        {
            cout << "Seven";
        }
        if (number == 8)
        {
            cout << "Eight";
        }
        if (number == 9)
        {
            cout << "Nine";
        }
        if (number == 10)
        {
            cout << "Ten";
        }
    }
}