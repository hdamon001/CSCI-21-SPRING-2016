#include "lab_10.h"

// CLASS FUNCTION DEFINITIONS GO HERE
Temperature::Temperature()//sets kelvin to 0
{
    kelvin_=0;
}

Temperature::Temperature(double kelvin)
{
    kelvin_=kelvin;//sets kelvin to parameter value
}

Temperature::Temperature(double temp, char unit)
{
    if (toupper(unit)=='C')
    {
        SetTempFromCelsius(temp);//converts celsius to kelvin and stores it
    }
    else if (toupper(unit)=='F')
    {
        SetTempFromFahrenheit(temp);//does same for fahrenheit
    }
    else
    {
        SetTempFromKelvin(temp);//does same for kelvin
    }
}

void Temperature::SetTempFromKelvin(double kelvin)
{
    kelvin_=kelvin;
}

void Temperature::SetTempFromCelsius(double celsius)
{
    kelvin_=celsius+273.15;//converts celsius to kelvin
}

void Temperature::SetTempFromFahrenheit(double fahrenheit)
{
    kelvin_=(5.0 * (fahrenheit - 32) / 9) + 273.15;//converts fahrenheit to kelvin
}

double Temperature::GetTempAsKelvin() const
{
    return kelvin_;
}

double Temperature::GetTempAsCelsius() const
{
    return kelvin_ - 273.15;//converts kelvin temperature to celsius
}

double Temperature::GetTempAsFahrenheit() const
{
    return (((kelvin_ - 273.15) * 9) / 5) + 32;//converts kelvin temperature to fahrenheit
}

string Temperature::ToString(char unit) const
{
    stringstream output;
    output.setf(std::ios::fixed|std::ios::showpoint);
    output.precision(2);//sets precision to 2 so it will output 2 decimal places
    if (toupper(unit)=='K')
    {
        output<<GetTempAsKelvin()<<" Kelvin";
        return output.str();
    }
    else if (toupper(unit)=='C')
    {
        output<<GetTempAsCelsius()<<" Celsius";
        return output.str();
    }
    else if (toupper(unit)=='F')
    {
        output<<GetTempAsFahrenheit()<<" Fahrenheit";
        return output.str();
    }
    else
    {
        return "Invalid Unit";
    }
}