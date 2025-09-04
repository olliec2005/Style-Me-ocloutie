//Ollie Cloutier

#include <iostream>
#include "Temperature.h"

using namespace std;

//takes user input and returns it as an integer
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

    Temperature my_tempurature;
    // if the user chooses Fahrenheit then use set_fahrenheit method otherwise use set_celsius
    (temperature_unit == 1) ? my_tempurature.set_fahrenheit(temperature) : my_tempurature.set_celsius(temperature);

    string adjective;

    // match an adjective to the temperature
    if (my_tempurature.get_celsius() < 0)
        adjective = "cold";

    else if (my_tempurature.get_celsius() > 30)
        adjective = "hot";

    else
        adjective = "beautiful";

    cout << "Hello, " << adjective << " World!" << endl;
    return 0;
}