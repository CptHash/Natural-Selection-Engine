/*
** Natural Selection Engine
** Created by mathieu on 31/01/20201.
** File description:
** N/a
*/

#include "../includes/Environment.hpp"
#include "../includes/Engine.hpp"
#include "../includes/Entity.hpp"
#include <ctime>
#include <unistd.h>
#include <iomanip>
#include <iostream>
#include <vector>

NSEngine::NSEngine()
{
    std::cout << "Engine created." << std::endl;

    for (int i = 0; i < 5; i++)
        _entities.push_back(new Entity(i));
};

void NSEngine::dump() const
{
    std::cout << "Dump:" << std::endl;
    for(auto &entity : _entities) {
        std::cout << entity->getId() << std::endl;
    }
}

void NSEngine::compute() const
{
    for(auto &entity : _entities) {
        if (entity->getMinimumTemp() >  _environment.getMinimumTemp() ||
        entity->getMaximumTemp() < _environment.getMaximumTemp())
            std::cout << "Entity " << entity->getId() << " is unsafe." <<std::endl;
        else
            std::cout << "Entity " << entity->getId() << " is safe." <<std::endl;
    }
}

std::vector<Entity*> NSEngine::getEntities() const
{
    return _entities;
}