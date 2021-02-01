/*
** Natural Selection Engine
** Created by mathieu on 31/01/20201.
** File description:
** N/a
*/

#include "../includes/Environment.hpp"
#include "../includes/Entity.hpp"
#include <ctime>
#include <unistd.h>
#include <iomanip>
#include <iostream>
#include <vector>

Environment::Environment() : _minimumTemp(-20), _maximumTemp(50)
{
    std::cout << "Environment created." << std::endl;
    std::cout << "  -> Temp: [" << _minimumTemp << "," << _maximumTemp << "]"<< std::endl;
};

void Environment::dump() const
{
    std::cout << "Dump:" << std::endl;
}


float Environment::getMinimumTemp() const 
{
    return _minimumTemp;
}

float Environment::getMaximumTemp() const 
{
    return _maximumTemp;
}
