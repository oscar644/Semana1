#include "Robot.h"
#include <iostream>
#include <string>
Robot::Robot(string name,int power_level,string model,string comida)
{
    this->name=name;
    this->power_level=power_level;
    this->model=model;
    this->comida=comida;
    this->angulo=0;
    this->posiX=0;
    this->posiY=0;
    this->pasoss=0;
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
void Robot::walk(int pasos){
    this->pasoss=pasos;
}
void Robot::setAngulo(int angulo){
if(angulo==0){
this->angulo=angulo;
this->posiX=this->posiX+this->pasoss;
}else if(angulo==90){
this->angulo=angulo;
this->posiY=this->posiY+this->pasoss;
}else if(angulo==180){
this->angulo=angulo;
this->posiX=this->posiX-this->pasoss;
}else if(angulo==270){
this->angulo=angulo;
this->posiY=this->posiY+this->pasoss;
}else{
cout<<"error en iniciar el angulo\n";
}

}
void Robot::printcordenada(){
cout<<"la cordenas que esta el robot es:\n";
cout<<"-------------------\n";
cout<<"cordenada x es: "<<this->posiX<<endl;
cout<<"cordenada y es: "<<this->posiY<<endl;
cout<<"su angulo es de: "<<this->angulo<<endl;
}
Robot::~Robot()
{

    //dtor
}
