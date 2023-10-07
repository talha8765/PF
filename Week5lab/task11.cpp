#include <iostream>
using namespace std;

string calculatePoolState(int V, int P1, int P2, float H);

main()
{
    int V, P1, P2;
    float H;
    cout << "Enter volume of the pool in liters: ";
    cin >> V;
    cout << "Enter flow rate of the first pipe per hour: ";
    cin >> P1;
    cout << "Enter flow rate of the second pipe per hour: ";
    cin >> P2;
    cout << "Enter hours that the worker is absent: ";
    cin >> H;
    string result=calculatePoolState(V, P1, P2,H);
    cout<<result;
  
}

string calculatePoolState(int V, int P1, int P2, float H)
{
    string result;
    float P = P1 + P2;
    float totalWaterFlow = P * H;
    if (totalWaterFlow >= V)
    {
        float overFlowWater = totalWaterFlow - V;
        result= "For " +to_string(H)+ " hours, the pool overflows with " +to_string(overFlowWater)+" liters.";
    }
    else
    {

        float poolPercentage = totalWaterFlow / V * 100;
        int pipe1Percentage = (P1 / P) * 100;
        int pipe2Percentage = (P2 / P) * 100;
        result="The pool is " +to_string(poolPercentage)+ "% full." + " Pipe 1: " +to_string(pipe1Percentage)+ "%." + " Pipe 2: "+to_string(pipe2Percentage)+ "%.";
	
    }
         return result;
}