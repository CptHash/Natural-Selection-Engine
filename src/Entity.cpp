/*
** Natural Selection Engine
** Created by mathieu on 31/01/20201.
** File description:
** N/a
*/

#include "../includes/Entity.hpp"
#include <ctime>
#include <unistd.h>
#include <iomanip>
#include <iostream>

Entity::Entity(int id) : _id(id), _minimumTemp(-20), _maximumTemp(50)
{
    std::cout << "Entity " << _id << " created:" << std::endl;
    std::cout << "  -> Temp: [" << _minimumTemp << "," << _maximumTemp << "]"<< std::endl;
};

void Entity::dump() const
{
    std::cout << "Dump" << std::endl;
}

int Entity::getId() const
{
    return _id;
}

float Entity::getMinimumTemp() const 
{
    return _minimumTemp;
}

float Entity::getMaximumTemp() const 
{
    return _maximumTemp;
}