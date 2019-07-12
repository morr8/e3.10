/*
 • E3.10
 Write a program that reads a temperature value and the letter C for Celsius or F for Fahrenheit. Print whether water is liquid, solid, or gaseous at the given temperature at sea level.
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "enter temperature in celsius or fahrenheit (example 12 c): ";
    float temp;
    string suffix;
    cin >> temp >> suffix;
    
    if (suffix == "f")
    {
        if (temp <= 32)
        {
            cout << "solid";
        }
        else if (temp < 212)
        {
            cout << "liquid";
        }
        else
        {
            cout << "gaseous";
        }
    }
    else
    {
        if (temp <= 0)
        {
            cout << "solid";
        }
        else if ( temp < 100)
        {
            cout << "liquid";
        }
        else
        {
            cout << "gaseous";
        }
    }
    cout << endl;
}
