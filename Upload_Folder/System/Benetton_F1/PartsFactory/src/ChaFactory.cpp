//
// Created by jason on 2020/11/06.
//

#include "../include/ChaFactory.h"

Part *ChaFactory::produce(std::string type) {
    return (Part *)(defaultChassis->clone());
}
