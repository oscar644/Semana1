#include <iostream>
#include <string>
#include "Robot.h"

using namespace std;

int main()
{
    int desi;
    string name;
    int power_level;
    string model;
    string comi;
    cout << "Robot name? ";
    cin >> name;
    cout << "Robot power_level? ";
    cin >> power_level;
    cout << "Robot model? ";
    cin >> model;
    cout<<"comida favorita?";
    cin>>comi;

    cout << endl << "---Creating robot---" << endl;
    Robot robot(name,power_level,model,comi);
    cout << "---Robot created---" << endl;

    cout << endl << "Robot name:" << robot.getName() << endl;
    cout << "Robot power level:" << robot.getPowerLevel() << endl;
    cout << "Robot model:" << robot.getModel() << endl;
    cout << "comida favorita:" << robot.getComida() << endl;
    do{
            cout<<"Ingrese la cantidad de pasos"<<endl;
            int pa;
    cin>>pa;
        robot.walk(pa);
    cout<<"ingrese el angulo"<<endl;
    int angu;
    cin>>angu;
        robot.setAngulo(angu);
        robot.printcordenada();
        cout<<"desea seguir caminando ingrese 1 para seguir 2 para salir debe ser en numero"<<endl;

        cin>>desi;
    }while(desi==1);
    return 0;
}
