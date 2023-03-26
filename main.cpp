#include <iostream>
#include <string>
using namespace std;


float GetRefactoinPart (float Number)
{
    return float(Number - int (Number));
}

float MyRound(float Number)
{
    int IntPart;
    IntPart = int(Number);
    float factoinPart = GetRefactoinPart(Number);

    if (abs(factoinPart) >= .5)
    {
        if (IntPart > 0)
        {
            return ++IntPart;
        } 
        else 
        {
            return --IntPart;
        }
    }
    else 
    {
        return IntPart;
    }
}
float ReadNumber ()
{
    float Number;
    cin >> Number;
    return Number;
}

int main()
{
    float Number = ReadNumber();
    cout << MyRound(Number);
    cout << endl;
    return 0;
}