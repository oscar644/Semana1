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

public:
    Robot(string name,int power_level,string model);
    string getName();
    int getPowerLevel();
    string getModel();
    virtual ~Robot();
};

#endif // ROBOT_H
