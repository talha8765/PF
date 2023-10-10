#include <iostream>
using namespace std;

bool greaterNumber(int number1, int number2);
main()
{
        int number1;
        cout << "Enter the first number: ";
        cin >> number1;
        int number2;
        cout << "Enter the second number: ";
        cin >> number2;
        bool result = greaterNumber(number1, number2);
        cout << result;
}
bool greaterNumber(int number1, int number2)
{
        bool result;
        if (number1 > number2)
        {
                result = true;
        }
        if (number1 < number2)
        {
                result = false;
        }
        return result;
}
