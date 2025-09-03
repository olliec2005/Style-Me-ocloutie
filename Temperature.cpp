#include "Temperature.h"

// Temp class constructor sets Fahrenheit to 32 degrees by default
Temperature::Temperature() : fahrenheit(32) {}

double Temperature::get_fahrenheit()
{
    return fahrenheit;
}

void Temperature::set_fahrenheit(double new_value)
{
    fahrenheit = new_value;
}

// formula to convert from Fahrenheit to Celsius
double Temperature::get_celsius() const
{
    return (fahrenheit - 32) * (5/9); // TODO: fix conversion equation
}

// formula to convert from Celsius to Fahrenheit
void Temperature::set_celsius(int celsius)
{
    fahrenheit = (celsius * (9/5) + 32); // TODO: fix conversion equation
}




