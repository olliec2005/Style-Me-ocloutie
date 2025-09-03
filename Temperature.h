#ifndef TEMPERATURE_H
#define TEMPERATURE_H

class Temperature {
    double fahrenheit;

public:
    // Class constructor
    Temperature();

    double get_fahrenheit();

    void set_fahrenheit(double new_value);

    // returns conversion from Fahrenheit to Celsius
    double get_celsius() const;

    // converts from Celsius to Fahrenheit and stores value in Fahrenheit variable
    void set_celsius(int celsius);
};

#endif //TEMPERATURE_H
