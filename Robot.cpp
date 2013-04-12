#include "Robot.h"

Robot::Robot(string name,int power_level,string model,string comida)
{
    this->name=name;
    this->power_level=power_level;
    this->model=model;
    this->comida=comida;
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
string Robot::getComida(){
return comida;
}
Robot::~Robot()
{
    //dtor
}
