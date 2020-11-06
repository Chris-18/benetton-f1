//
// Created by jason on 2020/11/06.
//

#ifndef COS214_ENGFACTORY_H
#define COS214_ENGFACTORY_H

#include <string>
#include "Part.h"

class EngFactory {
public:
    virtual Part* produce(std::string type);
};


#endif //COS214_ENGFACTORY_H
