/*
 * Name        : lab_9.cpp
 * Author      : FILL IN
 * Description : Building a Spaceship Class
 */
#include "lab_9.h"

// CODE HERE -- CLASS FUNCTION DEFINITIONS
void Spaceship::set_name(string name)
{
    name_=name;
}

void Spaceship::set_top_speed(double speed)
{
    top_speed_=speed;
}

void Spaceship::set_fuel_source(string source)
{
    fuel_source_=source;
}

void Spaceship::set_crew_capacity(int capacity)
{
    crew_capacity_=capacity;
}

string Spaceship::name() const
{
    return name_;
}

double Spaceship::top_speed() const
{
    return top_speed_;
}

string Spaceship::fuel_source() const
{
    return fuel_source_;
}

int Spaceship::crew_capacity() const
{
    return crew_capacity_;
}

string Spaceship::ToString() const
{
    stringstream specs;
    specs.setf(std::ios::fixed|std::ios::showpoint);
    specs.precision(2);
    specs<<name_<<endl<<"Top Speed:     Warp "<<top_speed_<<endl<<"Fuel Source:   "<<fuel_source_<<endl
         <<"Crew Capacity: "<<crew_capacity_;
    return specs.str();
}