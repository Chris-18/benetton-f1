//
// Created by jason on 2020/11/03.
//

#ifndef BENETTON_F1_ENGINEERING_H
#define BENETTON_F1_ENGINEERING_H

#include "ResearchAndDevelopmentDepartment.h"
#include "Engine.h"
#include "Chassis.h"
#include "Electronics.h"
#include "Aerodynamics.h"

class Engineering {
public:
    static Engineering* getInstance();
    void setBudget(double budget);
    static void setBest(Part* newBest);
    Engine* getEngine(){return engine;};
    Chassis* getChassis(){return chassis;};
    Electronics* getElectronics(){return electronics;};
    Aerodynamics* getAreodynamics(){return areodynamics;};
protected:
    Engineering();
private:
    Engine* engine;
    Chassis* chassis;
    Electronics* electronics;
    Aerodynamics* areodynamics;
    double budget;
    Engineering* instance;
};

#endif //BENETTON_F1_ENGINEERING_H
