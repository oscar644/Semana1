#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>
#include <string>

using namespace std;

class Robot
{
private:
    string name;
    int power_level;
    string model;
    string comida;

public:
    Robot(string name,int power_level,string model,string comida);
    string getName();
    int getPowerLevel();
    string getModel();
    string getComida();
    virtual ~Robot();
};

#endif // ROBOT_H
