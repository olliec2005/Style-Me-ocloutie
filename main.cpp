//Ollie Cloutier

#include <iostream>
#include "Temperature.h"

using namespace std;

int get_input(string message)
{
    int user_response = 0;
    cout << message;

    while (!(cin >> user_response))
    {
        cout << "Invalid input, please try again: " << endl;
        cin.clear();

        string input;
        getline(cin, input);
    }

    return user_response;
}

int main() {
    int temperature = get_input("What is the temperature? ");
    int temperature_unit = get_input("What is the temperature unit? Fahrenheit(1), Celsius(any other number): ");

    Temperature mytemp;
    (temperature_unit == 1) ? mytemp.set_fahrenheit(temperature) : mytemp.set_celsius(temperature);

    string a;

    if (mytemp.get_celsius() < 0)
        a = "cold";

    else if (mytemp.get_celsius() > 30)
        a = "hot";

    else
        a = "beautiful";

    cout << "Hello, " << a << " World!" << endl;
    return 0;
}