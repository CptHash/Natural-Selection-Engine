/*
** Natural Selection Engine
** Created by mathieu on 31/01/20201.
** File description:
** N/a
*/

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

std::vector<Entity*> NSEngine::getEntities() const
{
    return _entities;
}