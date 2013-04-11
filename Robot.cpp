#include "Robot.h"

Robot::Robot(string name,int power_level,string model)
{
    this->name=name;
    this->power_level=power_level;
    this->model=model;
}

string Robot::getName()
{
    return name;
}

int Robot::getPowerLevel()
{
    return power_level;
}

string Robot::getModel()
{
    return model;
}

Robot::~Robot()
{
    //dtor
}
